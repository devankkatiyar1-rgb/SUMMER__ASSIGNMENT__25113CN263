/*Write a program to Create contact 
management system.*/

#include <iostream>
#include <string>
using namespace std;

class ContactManager {
    string name[100];
    string phone[100];
    int count = 0;

public:
    void addContact() {
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name[count]);

        cout << "Enter Phone Number: ";
        getline(cin, phone[count]);

        count++;
        cout << "Contact Added Successfully!\n";
    }

    void displayContacts() {
        if (count == 0) {
            cout << "No Contacts Available!\n";
            return;
        }

        cout << "\n----- Contact List -----\n";
        for (int i = 0; i < count; i++) {
            cout << "\nContact " << i + 1 << endl;
            cout << "Name  : " << name[i] << endl;
            cout << "Phone : " << phone[i] << endl;
        }
    }

    void searchContact() {
        cin.ignore();

        string searchName;
        cout << "Enter Name to Search: ";
        getline(cin, searchName);

        for (int i = 0; i < count; i++) {
            if (name[i] == searchName) {
                cout << "\nContact Found!\n";
                cout << "Name  : " << name[i] << endl;
                cout << "Phone : " << phone[i] << endl;
                return;
            }
        }

        cout << "Contact Not Found!\n";
    }
};

int main() {
    ContactManager cm;
    int choice;

    do {
        cout << "\n===== Contact Management System =====";
        cout << "\n1. Add Contact";
        cout << "\n2. Display Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cm.addContact();
                break;

            case 2:
                cm.displayContacts();
                break;

            case 3:
                cm.searchContact();
                break;

            case 4:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}