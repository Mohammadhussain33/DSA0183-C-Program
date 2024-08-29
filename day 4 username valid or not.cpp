#include <iostream>
#include <string>
using namespace std;

// Function to get the username from the user
string getUserName() {
    string username;
    cout << "Enter the user name: ";
    getline(cin, username);
    return username;
}

// Function to check if the two usernames are the same
bool isValidUserName(const string &username1, const string &username2) {
    return username1 == username2;
}

int main() {
    // Get both usernames from the user
    string username1 = getUserName();
    string username2 = getUserName();
    
    // Compare the two usernames and print the result
    if (isValidUserName(username1, username2)) {
        cout << "User name is Valid" << endl;
    } else {
        cout << "User name is Invalid" << endl;
    }

    return 0;
}

