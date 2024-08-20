#include <iostream>
using namespace std;

int main() {
    int n, num, sum = 0;
    
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "Enter the numbers: ";
    
    // Use a for loop to calculate the sum of n numbers
    for (int i = 1; i <= n; i++) {
        cin >> num;
        sum += num;
    }
    
    cout << "Sum: " << sum << endl;
    
    return 0;
}

