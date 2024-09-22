#include <iostream>
using namespace std;

int main() 
{
 int a,b,c;
cout << "input number 1: " ;
cin >> a ;

cout << "input number 2: " ;
cin >> b ;

cout << "input number 3: " ;
cin >> c ;

int largest = a;

if (b > largest ) {
    largest = b ;
}

if (c > largest ) {
    largest = c ;
}
cout << "The large number: " << largest << endl ;

}
