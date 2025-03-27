#include <iostream>
#include <includes/loop-interations.hpp>

int main() {
    double a, b, eps;

    std::cout << "Please type the left border (a): ";
    std::cin >> a;

    std::cout << "Please type the right border (b): ";
    std::cin >> b;

    std::cout << "Please type the Epsilon error: ";
    std::cin >> eps;

    loopIterations(a, b, eps);
    return 0;
}