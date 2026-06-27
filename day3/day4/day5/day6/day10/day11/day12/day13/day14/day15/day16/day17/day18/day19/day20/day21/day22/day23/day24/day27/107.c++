/*Write a program to Create salary management 
system. */

#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int id;
    string name;
    float basicSalary;
    float bonus;
    float deduction;
    float netSalary;
};

int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee Salary\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Salary Record\n";
        cout << "5. Delete Record\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Employee e;

            cout << "Enter Employee ID: ";
            cin >> e.id;

            cout << "Enter Employee Name: ";
            cin >> e.name;

            cout << "Enter Basic Salary: ";
            cin >> e.basicSalary;

            cout << "Enter Bonus: ";
            cin >> e.bonus;

            cout << "Enter Deduction: ";
            cin >> e.deduction;

            e.netSalary = e.basicSalary + e.bonus - e.deduction;

            employees.push_back(e);

            cout << "Salary Record Added Successfully!\n";
        }

        else if (choice == 2) {
            if (employees.empty()) {
                cout << "No salary records found.\n";
            }
            else {
                cout << "\nEmployee Salary Records\n";

                for (int i = 0; i < employees.size(); i++) {
                    cout << "ID: " << employees[i].id << endl;
                    cout << "Name: " << employees[i].name << endl;
                    cout << "Basic Salary: " << employees[i].basicSalary << endl;
                    cout << "Bonus: " << employees[i].bonus << endl;
                    cout << "Deduction: " << employees[i].deduction << endl;
                    cout << "Net Salary: " << employees[i].netSalary << endl;
                    cout << "---------------------------\n";
                }
            }
        }

        else if (choice == 3) {
            int id;
            bool found = false;

            cout << "Enter Employee ID: ";
            cin >> id;

            for (int i = 0; i < employees.size(); i++) {
                if (employees[i].id == id) {
                    cout << "\nEmployee Found\n";
                    cout << "Name: " << employees[i].name << endl;
                    cout << "Basic Salary: " << employees[i].basicSalary << endl;
                    cout << "Bonus: " << employees[i].bonus << endl;
                    cout << "Deduction: " << employees[i].deduction << endl;
                    cout << "Net Salary: " << employees[i].netSalary << endl;

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

                    cout << "Enter New Basic Salary: ";
                    cin >> employees[i].basicSalary;

                    cout << "Enter New Bonus: ";
                    cin >> employees[i].bonus;

                    cout << "Enter New Deduction: ";
                    cin >> employees[i].deduction;

                    employees[i].netSalary =
                        employees[i].basicSalary +
                        employees[i].bonus -
                        employees[i].deduction;

                    cout << "Salary Record Updated Successfully!\n";

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

                    cout << "Record Deleted Successfully!\n";

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";
        }

        else if (choice == 6) {
            cout << "Thank You!\n";
        }

        else {
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}