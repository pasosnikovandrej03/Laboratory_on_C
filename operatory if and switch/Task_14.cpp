#include <iostream>

int main() {
    for (int number = 1000; number <= 9999; number++) {
        int first_two_digits = number / 100;
        int last_two_digits = number % 100;

        if (first_two_digits == 22) {
            std::cout << number << std::endl;
        }
    }

    return 0;
}
