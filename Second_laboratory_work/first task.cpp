// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
   int x, y;
   double c;
   
   cout << "Enter x value: ";
   cin >> x;
   cout << "Enter y value: ";
   cin >> y;
   
   c = sqrt(pow(x,2) + pow(y,2));
   
   if(x >= 0 && x >= 0 && x <= 2 && y <=2 ){
    cout << "You win \n";
    } 
    if (x > 2 || y > 2){
    cout << "You lose \n";
    }
        cout << "Resultt: " << c;
}