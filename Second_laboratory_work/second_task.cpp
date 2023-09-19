// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
   int x, z;
   double y;
   
   cout << "Enter x value: ";
   cin >> x;
   cout << "Enter z value: ";
   cin >> z;
   
   if(x <= 1){
       y = (6*pow(z,2)-5)/3;
       } 
    if (x > 1){
        y = (5*pow(z,2)-4)/12;
        }
        cout << "Resultt: " << y;
}