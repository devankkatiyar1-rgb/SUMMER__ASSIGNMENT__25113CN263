/*Q115
Write a program to Create menu-driven string operations system.*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int choice;
    bool isCreated = false;

    while (true) {
        cout << "\n====== STRING OPERATIONS MENU ======\n";
        cout << "1. Enter String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Reverse String\n";
        cout << "5. Convert to Uppercase\n";
        cout << "6. Convert to Lowercase\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();   // Clear newline

        switch (choice) {

        case 1:
            cout << "Enter a string: ";
            getline(cin, str);
            isCreated = true;
            break;

        case 2:
            if (!isCreated) {
                cout << "Please enter a string first!\n";
                break;
            }
            cout << "String: " << str << endl;
            break;

        case 3:
            if (!isCreated) {
                cout << "Please enter a string first!\n";
                break;
            }
            cout << "Length = " << str.length() << endl;
            break;

        case 4:
            if (!isCreated) {
                cout << "Please enter a string first!\n";
                break;
            }
            reverse(str.begin(), str.end());
            cout << "Reversed String: " << str << endl;
            break;

        case 5:
            if (!isCreated) {
                cout << "Please enter a string first!\n";
                break;
            }
            for (char &ch : str)
                ch = toupper(ch);

            cout << "Uppercase: " << str << endl;
            break;

        case 6:
            if (!isCreated) {
                cout << "Please enter a string first!\n";
                break;
            }
            for (char &ch : str)
                ch = tolower(ch);

            cout << "Lowercase: " << str << endl;
            break;

        case 7:
            cout << "Exiting Program...\n";
            return 0;

        default:
            cout << "Invalid Choice!\n";
        }
    }
}