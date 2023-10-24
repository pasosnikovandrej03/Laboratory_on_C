#include <iostream>

int main() {
    for (int number = 1000; number < 10000; number++) {
        int first_two_digits = number / 100;  // Отримуємо перші дві цифри
        int last_two_digits = number % 100;   // Отримуємо останні дві цифри

        // Перевіряємо, чи перші дві цифри дорівнюють двом іншим
        if (first_two_digits == 22) {
            std::cout << number << std::endl;
        }
    }

    return 0;
}
