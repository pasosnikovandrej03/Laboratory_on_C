#include <iostream>
#include <iomanip>
#include <locale>

int main() {
   int num1, num2;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    if (num2 != 0) {
        float result1 = 1.0f / static_cast<float>(num1);
        float result2 = 1.0f / static_cast<float>(num2);

        if (result1 == result2) {
            std::cout << "The division results are the same." << std::endl;
        } else {
            std::cout << "Separation results vary." << std::endl;
        }
    } else {
        std::cout << "The second number is zero. Division by zero is impossible." << std::endl;
    }

    return 0;
}
