#include <iostream>
using namespace std;

int main() {
    int n, num, sum = 0;
    int i = 1;

    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "Enter the numbers: ";
    
    do {
        cin >> num;
        sum += num;
        i++; 
    } while (i <= n);
    
    cout << "Sum: " << sum << endl;
    
    return 0;
}

