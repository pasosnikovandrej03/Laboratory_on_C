#include <iostream>
#include <cmath>

int main() {
    double sum_of_roots = 0.0;

    for (int i = 1; i <= 20; i++) {
        double root = sqrt(i);  
        sum_of_roots += root;   
    }

    double average = sum_of_roots / 20;  

    std::cout << "Arithmetic mean root numbers from 1 to 20: " << average << std::endl;

    return 0;
}
