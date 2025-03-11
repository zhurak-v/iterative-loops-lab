#include <includes/print.hpp>
#include <cmath>
#include <functional>

double sign(double x) {
    return x < 0 ? -1.0 : (x > 0 ? 1.0 : 0.0);
}

enum monotonic_e {
    MONOTONIC_INCREASE,
    MONOTONIC_DECREASE,
    MONOTONIC_CONSTANS,
    MONOTONIC_NOT
};

monotonic_e monotonic(const std::function<double(double)>& f, double a, double b, double eps = 1e-6) {
    double x = a, y1 = f(x), y2 = f(x + eps);
    double d = y2 - y1;
    double s = sign(d);
    
    while (x < b) {
        x += eps;
        y1 = y2;
        y2 = f(x + eps);
        d = y2 - y1;
        
        if (s == 0.) {
            s = sign(d);
        }
        
        if (s * d < 0) {
            return MONOTONIC_NOT;
        }
    }
    
    return s > 0 ? MONOTONIC_INCREASE :
           (s < 0 ? MONOTONIC_DECREASE : MONOTONIC_CONSTANS);
}

double f(double x) {
    return pow(x, 3) - exp(x) - 5.5;
}

bool isMonotonic(double a, double b) {
    monotonic_e result = monotonic(f, a, b);
    return result != MONOTONIC_NOT && result != MONOTONIC_CONSTANS;
}

bool hasRoot(double a, double b) {
    return f(a) * f(b) < 0;
}

bool checkInterval(double a, double b) {
    if (a == b || !isMonotonic(a, b) || !hasRoot(a, b)) {
        printInValidInterval();
        return false;
    }
    printValidInterval();
    return true;
}
