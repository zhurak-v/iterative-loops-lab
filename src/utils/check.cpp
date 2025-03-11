#include <includes/print.hpp>
#include <cmath>

double function(double x) {
    return pow(x, 3) - exp(x) - 5.5;
}

double derivative(double x) {
    return 3 * pow(x, 2) - exp(x);
}

bool isMonotonic(double a, double b) {
    return (derivative(a) > 0 && derivative(b) > 0) || (derivative(a) < 0 && derivative(b) < 0);
}

bool hasOneRoot(double a, double b) {
    return function(a) * function(b) < 0;
}

bool checkInterval(double a, double b) {
    if (a == b || !isMonotonic(a, b) || !hasOneRoot(a, b)) {
        printInValidInterval();
        return false;
    }
    printValidInterval();
    return true;
}
