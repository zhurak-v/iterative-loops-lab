#include <iostream>
#include <iomanip>

void printTitle() {
    std::cout  << "Iteration"
              << std::setw(8) << "x"
              << std::endl;
}

void printIteration(int iteration, double x) {
    std::cout << std::setw(5) << iteration
              << std::setw(15) << std::fixed << x
              << std::endl;
}

void printResult(double x) {
    std::cout << "The root found is x = " << std::fixed << std::setprecision(5) << x << std::endl;
}

void printOutOfBounds() {
    std::cout << "The root of the equation is outside the interval" << std::endl;
}

void printValidInterval() {
    std::cout << "Valid interval." << std::endl;
}
void printInValidInterval() {
    std::cout << "The input values are of the wrong type or the function has multiple roots. Try different values!" << std::endl;
}