#include <iostream>
using namespace std;

int main() 
{
 int a,b,c; // declare variable
cout << "input number 1: " ; // input a,b,c number
cin >> a ;

cout << "input number 2: " ;
cin >> b ;

cout << "input number 3: " ;
cin >> c ;

int largest = a; // determine the largest number

if (b > largest ) { // compared the number
    largest = b ;
}

if (c > largest ) {
    largest = c ;
}
cout << "The large number: " << largest << endl ; // output the largest number

return 0; // end the program
}
