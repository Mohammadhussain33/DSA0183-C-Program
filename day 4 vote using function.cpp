#include <iostream>
using namespace std;

// Function to get the age input from the user
int getPerson() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    return age;
}

// Function to check voting eligibility
void checkEligibility(int age) {
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        int yearsLeft = 18 - age;
        cout << "You are allowed to vote after " << yearsLeft << " years." << endl;
    }
}

int main() {
    int age = getPerson();  // Get the age input using the function
    checkEligibility(age);  // Check voting eligibility based on the age
    return 0;
}

