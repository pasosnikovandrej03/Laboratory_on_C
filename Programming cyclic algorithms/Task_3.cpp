#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a, b, h;
    
    std::cout << "Insert cob into cut a: ";
    std::cin >> a;
    std::cout << "Enter the end of section b: ";
    std::cin >> b;
    std::cout << "Enter code h: ";
    std::cin >> h;
    
    std::cout << "-------------------\n";
    std::cout << std::left << std::setw(10) << "X" << std::setw(10) << "Y" << "\n";
    std::cout << "-------------------\n";
    
    for (double x = a; x <= b; x += h) {
        double y;
        
        if (x * x <= 9.0) {
            y = std::pow(x, 5) - std::sqrt(9.0 - x * x);
            std::cout << std::setw(10) << x << std::setw(10) << y << "\n";
        } else {
            std::cout << std::setw(10) << x << " : Significance x does not apply to ODZ\n";
        }
    }
    
    std::cout << "-------------------\n";
    
    return 0;
}
