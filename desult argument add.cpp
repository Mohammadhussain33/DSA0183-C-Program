#include <iostream>
using namespace std;

int sum(int a, int b = 0, int c = 0, int d = 0) {
    return a + b + c + d;
}

int main() {
    int num1, num2, num3, num4;

    
    cout << "Enter the values: ";
    cin >> num1 >> num2 >> num3 >> num4;


    int result = sum(num1, num2, num3, num4);

    cout << "Sum: " << result << std::endl;

    return 0;
}

