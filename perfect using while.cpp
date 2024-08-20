#include <iostream>
using namespace std;

int main() {
    int number, sum = 0, i = 1;
    
    cout << "Enter a number: ";
    cin >> number;
    
    // Use a while loop to calculate the sum of divisors
    while (i < number) {
        if (number % i == 0) {
            sum += i;
        }
        i++;
    }
    
    // Check if the sum of divisors equals the number
    if (sum == number) {
        cout << number << " is a perfect number." << endl;
    } else {
        cout << number << " is not a perfect number." << endl;
    }
    
    return 0;
}

