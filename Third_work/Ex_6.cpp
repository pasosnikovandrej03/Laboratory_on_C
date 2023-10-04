#include <iostream>
#include <iomanip>
#include <string>

int main()
{
 float a = 2.3;
 float b = 2.30;
 float e =2.123456;
 float f =2.123456;
 float g =2.123456;

    std::cout << "The variable a has the value:" << a << std::endl;
    std::printf("%.2f\n", var2);
    std::cout << std::setprecision(7) <<  "The variable b has the value:" << e << std::endl;
    std::cout << std::setprecision(3) <<  "The variable b has the value:" << e << std::endl;
    std::cout << std::setprecision(1) <<  "The variable b has the value:" << e << std::endl;

    return 0;
}