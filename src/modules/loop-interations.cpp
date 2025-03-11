#include <iostream>
#include <cmath>
#include <includes/iterative.hpp>
#include <includes/print.hpp>
#include <includes/check.hpp>

void loopIterations(double a, double b, double e) {
    if (!checkInterval(a, b))
        return;

    double x0 = (a + b) / 2.0;
    double x1;
    int iterations = 1;

    printTitle();

    do {
        x1 = phi(x0);
        printIteration(iterations, x1);

        if (fabs(x1 - x0) < e) {
            printResult(x1);
            return;
        }

        x0 = x1;
        iterations++;
    } while (x1 >= a && x1 <= b);  

    printOutOfBounds();
}
