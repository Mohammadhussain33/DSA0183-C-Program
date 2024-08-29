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
    int age = getPerson(); 
    checkEligibility(age); 
    return 0;
}


int getperson(){
	int age;
	cout<<"Enter your age:";
	cin>>age;
	return 0;
}
void checkEligibility(int age){
	if(age >= 18){
		cout << "you are elibigle to vote."<<endl;
	}else{
		int yearLeft = 18 - age;
		cout <<"you are allowed to vote after "<<yearLeft << "years." <<endl;
	}
}
int main() {
	int age = getPerson();
	checkEligility(age);
	return 0;
}

