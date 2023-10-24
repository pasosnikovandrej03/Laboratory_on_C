#include <iostream>
#include <cmath>

int main() {
    const int numValues = 5;  // Кількість значень x, які ми хочемо обчислити
    double x, y;

    std::cout << "Введіть п'ять різних значень x для обчислення функції:" << std::endl;

    for (int i = 1; i <= numValues; i++) {
        std::cout << "Введіть значення x " << i << ": ";
        std::cin >> x;

        // Обчислюємо значення функції для введеного x
        y = pow(sin(x), 5) + std::abs(5 * x - 1.5);

        std::cout << "Для x = " << x << ", y = " << y << std::endl;
    }

    return 0;
}
