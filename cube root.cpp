#include <iostream>
#include <cmath> // for cbrt function
using namespace std;

int main() {
    double number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    double result = cbrt(number); // calculate cube root
    cout << "The cube root of " << number << " is " << result << endl;
    
    return 0;
}

