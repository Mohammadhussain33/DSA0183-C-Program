#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 3, 5, 6, 7}; // Example sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int i = 0;
    
    // Use a while loop to find the smallest missing element
    while (i < n && arr[i] == i) {
        i++;
    }
    
    // The value of i at the end of the loop is the smallest missing element
    cout << "The smallest missing element is: " << i << endl;
    
    return 0;
}

