#include <iostream>
#include <includes/loop-interations.hpp>

int main() {
    double a, b, e;

    std::cout << "Please type the left border (a): ";
    std::cin >> a;

    std::cout << "Please type the right border (b): ";
    std::cin >> b;

    std::cout << "Please type the Epsilon error: ";
    std::cin >> e;

    loopIterations(a, b, e);
    return 0;
}