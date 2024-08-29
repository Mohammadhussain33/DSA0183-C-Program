#include <iostream>
#include <string>
using namespace std;

// Base class Employee
class Employee {
private:
    string Emp_name, Address, Mail_id;
    int Emp_id;
    long long Mobile_no;

public:
    // Function to get employee details
    void getEmployeeDetails() {
        cout << "Enter Name of the Employee: ";
        cin >> Emp_name;
        cout << "Enter Address of the Employee: ";
        cin >> Address;
        cout << "Enter ID of the Employee: ";
        cin >> Emp_id;
        cout << "Enter Mobile Number: ";
        cin >> Mobile_no;
        cout << "Enter E-Mail ID of the Employee: ";
        cin >> Mail_id;
    }

    // Function to display employee details
    void displayEmployeeDetails() {
        cout << "Employee Name: " << Emp_name << endl;
        cout << "Employee ID: " << Emp_id << endl;
        cout << "Address: " << Address << endl;
        cout << "Mobile Number: " << Mobile_no << endl;
        cout << "E-Mail ID: " << Mail_id << endl;
    }
};

// Derived class Programmer from Employee
class Programmer : public Employee {
private:
    float BP, DA, HRA, PF, ClubFund, GrossPay, NetPay;

public:
    // Function to get basic pay
    void getBasicPay() {
        cout << "Enter the Basic Pay of the Programmer => ";
        cin >> BP;
    }

    // Function to calculate salary components
    void calculateSalary() {
        DA = 0.97 * BP;
        HRA = 0.10 * BP;
        PF = 0.12 * BP;
        ClubFund = 0.001 * BP;
        GrossPay = BP + DA + HRA;
        NetPay = GrossPay - (PF + ClubFund);
    }

    // Function to generate pay slip
    void generatePaySlip() {
        cout << "=======================" << endl;
        cout << "PROGRAMMER PAYMENT SLIP" << endl;
        cout << "=======================" << endl;
        cout << "BASIC PAY => " << BP << endl;
        cout << "DEARNESS ALLOWANCE => " << DA << endl;
        cout << "HOUSE RENT ALLOWANCE => " << HRA << endl;
        cout << "PROVIDENT FUND => " << PF << endl;
        cout << "CLUB FUND => " << ClubFund << endl;
        cout << "GROSS PAY => " << GrossPay << endl;
        cout << "NET PAY => " << NetPay << endl;
    }
};

int main() {
    // Create an object of the Programmer class
    Programmer p;

    // Get employee details and basic pay, calculate salary, and generate pay slip
    p.getEmployeeDetails();
    p.getBasicPay();
    p.calculateSalary();
    p.generatePaySlip();

    return 0;
}

