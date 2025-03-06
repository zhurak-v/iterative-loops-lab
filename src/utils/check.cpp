#include <includes/print.hpp>
#include <cmath>

double equation(double x) {
    return pow(x, 3) - exp(x) - 5.5;
}

double derivative(double x) {
    return 3 * pow(x, 2) - exp(x);
}

bool isMonotonic(double a, double b) {
    double derivativeAtA = derivative(a);
    double derivativeAtB = derivative(b);

    return (derivativeAtA > 0 && derivativeAtB > 0) || (derivativeAtA < 0 && derivativeAtB < 0);
}

void checkInterval(double a, double b) {
    if ((equation(a) * equation(b) > 0) || !isMonotonic(a, b)) {
        printInValidInterval();
        return;
    }
    printValidInterval();
}
