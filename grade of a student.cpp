#include <iostream>
using namespace std;

int main() {
    int marks[5], total = 0;
    float average, percentage;
    char grade;

    cout << "Please Enter the marks of five subjects: ";
    for(int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    if (percentage >= 75) {
        grade = 'A';  // Distinction
    } else if (percentage >= 60) {
        grade = 'B';  // First Division
    } else if (percentage >= 50) {
        grade = 'C';  // Second Division
    } else if (percentage >= 40) {
        grade = 'D';  // Third Division
    } else {
        grade = 'E';  // Fail
    }

    cout << "Total Marks      = " << total << endl;
    cout << "Average Marks    = " << average << endl;
    cout << "Marks Percentage = " << percentage << endl;
    cout << "Grade            = " << grade << endl;

    return 0;
}

