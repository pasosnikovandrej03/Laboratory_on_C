#include <iostream>

int main() {
    int count = 0;  

    for (int num = 100; num < 1000; num++) {
        int first_digit = num / 100;
        int last_digit = num % 10;

        if (first_digit == last_digit) {
            count++;  
        }
    }

    std::cout << "The number of three-digit numbers, the first digit = the remaining digit: " << count << std::endl;
    return 0;
}
