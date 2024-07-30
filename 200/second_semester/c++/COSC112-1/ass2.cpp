#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char username[20];
    char password[50];
    char confirmPassword[50];
    bool validUsername = false;
    bool validPassword = false;

    while (!validUsername) {
        cout << "Enter a username (between 8 and 15 characters): ";
        cin.getline(username, 20);

        if (strlen(username) < 8 || strlen(username) >= 15) {
            cout << "Invalid username length. Please try again." << endl;
        } else {
            validUsername = true;
        }
    }
    while (!validPassword)
    {
        cout << "Enter a password: ";
        cin.getline(password, 50);

        cout << "Re-type your password: ";
        cin.getline(confirmPassword, 50);

        if (strcmp(password, confirmPassword) != 0) {
            cout << "Passwords do not match" << endl;
        } else {
            cout << "Registration successful" << endl;
            validPassword= true;
        }
    } 
    return 0;
}