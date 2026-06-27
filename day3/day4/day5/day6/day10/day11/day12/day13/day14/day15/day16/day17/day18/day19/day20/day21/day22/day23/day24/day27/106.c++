/*Write a program to Create employee 
management system. */

#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    float salary;
};

int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Employee e;

            cout << "Enter Employee ID: ";
            cin >> e.id;

            cout << "Enter Employee Name: ";
            cin >> e.name;

            cout << "Enter Department: ";
            cin >> e.department;

            cout << "Enter Salary: ";
            cin >> e.salary;

            employees.push_back(e);

            cout << "Employee Added Successfully!\n";
        }

        else if (choice == 2) {
            if (employees.empty()) {
                cout << "No employee records found.\n";
            }
            else {
                cout << "\nEmployee Records:\n";

                for (int i = 0; i < employees.size(); i++) {
                    cout << "Employee ID: " << employees[i].id << endl;
                    cout << "Name: " << employees[i].name << endl;
                    cout << "Department: " << employees[i].department << endl;
                    cout << "Salary: " << employees[i].salary << endl;
                    cout << "-------------------------\n";
                }
            }
        }

        else if (choice == 3) {
            int id;
            bool found = false;

            cout << "Enter Employee ID to Search: ";
            cin >> id;

            for (int i = 0; i < employees.size(); i++) {
                if (employees[i].id == id) {
                    cout << "\nEmployee Found!\n";
                    cout << "Name: " << employees[i].name << endl;
                    cout << "Department: " << employees[i].department << endl;
                    cout << "Salary: " << employees[i].salary << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";
        }

        else if (choice == 4) {
            int id;
            bool found = false;

            cout << "Enter Employee ID to Update: ";
            cin >> id;

            for (int i = 0; i < employees.size(); i++) {
                if (employees[i].id == id) {

                    cout << "Enter New Name: ";
                    cin >> employees[i].name;

                    cout << "Enter New Department: ";
                    cin >> employees[i].department;

                    cout << "Enter New Salary: ";
                    cin >> employees[i].salary;

                    cout << "Employee Record Updated Successfully!\n";

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";
        }

        else if (choice == 5) {
            int id;
            bool found = false;

            cout << "Enter Employee ID to Delete: ";
            cin >> id;

            for (int i = 0; i < employees.size(); i++) {
                if (employees[i].id == id) {
                    employees.erase(employees.begin() + i);

                    cout << "Employee Deleted Successfully!\n";

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";
        }

        else if (choice == 6) {
            cout << "Exiting Program...\n";
        }

        else {
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}