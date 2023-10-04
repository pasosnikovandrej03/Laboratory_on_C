#include <iostream>
#include <iomanip>
#include <locale>

int main() {
    int num1, num2, num3, num4;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    std::cout << "Enter the third number: ";
    std::cin >> num3;

    std::cout << "Enter the fourth number: ";
    std::cin >> num4;

    if (num1 >= 1 && num1 <= 255 && num2 >= 1 && num2 <= 255 && num3 >= 1 && num3 <= 255 && num4 >= 1 && num4 <= 255) {
        std::cout << num1 << "." << num2 << "." << num3 << "." << num4 << std::endl;
    } else {
        std::cout << "The entered numbers do not belong to the range from 1 to 255." << std::endl;
    }

    return 0;
}
