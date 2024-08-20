#include <iostream>
using namespace std;

int main() {
    int n, num, sum = 0;
    int i = 1; // Initialize counter
    
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "Enter the numbers: ";
    
    while (i <= n) {
        cin >> num;
        sum += num;
        i++;
    }
    
    cout << "Sum: " << sum << endl;
    
    return 0;
}

