#include <iostream>
#include <cmath>

int main() {
    double sum_of_roots = 0.0;

    for (int i = 1; i <= 20; i++) {
        double root = sqrt(i);  // Обчислюємо корінь числа i
        sum_of_roots += root;   // Додаємо корінь до загальної суми
    }

    double average = sum_of_roots / 20;  // Знаходимо середнє арифметичне

    std::cout << "Середнє арифметичне коренів чисел від 1 до 20: " << average << std::endl;

    return 0;
}
