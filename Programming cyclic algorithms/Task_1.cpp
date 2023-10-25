#include <iostream>
#include <cmath>

int main() {
    const int numValues = 5;  
    double x, y;

    std::cout << "Enter five different x values to calculate the function:" << std::endl;

    for (int i = 1; i <= numValues; i++) {
        std::cout << "Enter value x" << i << ": ";
        std::cin >> x;

        y = pow(sin(x), 5) + std::abs(5 * x - 1.5);

        std::cout << "Для x = " << x << ", y = " << y << std::endl;
    }

    return 0;
}
