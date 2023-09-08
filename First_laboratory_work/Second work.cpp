// Example program
#include <iostream>
#include <string>
#include <math.h>
int main()
{
  int a = 2; 
  double  b = 3.141; 
  
  double result = 0;
  
  double c = pow(sqrt(log10(b/a)),3); 
  
  double d = pow(sqrt((0,711*log10(b))/(1+c)),3);
  
   result = pow(sqrt((0,315*log10(a))/(1+d)),3);
  
  std::cout << c << "\n" << d << "\n" << result ; 
  
}