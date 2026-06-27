//Write a program to Create student record 
//management system
#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int roll;
    string name;
    int age;
    float marks;
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            cout << "Enter Roll Number: ";
            cin >> s.roll;
            cout << "Enter Name: ";
            cin >> s.name;
            cout << "Enter Age: ";
            cin >> s.age;
            cout << "Enter Marks: ";
            cin >> s.marks;

            students.push_back(s);
            cout << "Student Record Added Successfully!\n";
        }

        else if (choice == 2) {
            if (students.empty()) {
                cout << "No records found.\n";
            } else {
                cout << "\nStudent Records:\n";
                for (int i = 0; i < students.size(); i++) {
                    cout << "Roll No: " << students[i].roll << endl;
                    cout << "Name: " << students[i].name << endl;
                    cout << "Age: " << students[i].age << endl;
                    cout << "Marks: " << students[i].marks << endl;
                    cout << "----------------------\n";
                }
            }
        }

        else if (choice == 3) {
            int roll;
            cout << "Enter Roll Number to Search: ";
            cin >> roll;

            bool found = false;
            for (int i = 0; i < students.size(); i++) {
                if (students[i].roll == roll) {
                    cout << "Record Found!\n";
                    cout << "Name: " << students[i].name << endl;
                    cout << "Age: " << students[i].age << endl;
                    cout << "Marks: " << students[i].marks << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found.\n";
        }

        else if (choice == 4) {
            int roll;
            cout << "Enter Roll Number to Update: ";
            cin >> roll;

            bool found = false;
            for (int i = 0; i < students.size(); i++) {
                if (students[i].roll == roll) {
                    cout << "Enter New Name: ";
                    cin >> students[i].name;
                    cout << "Enter New Age: ";
                    cin >> students[i].age;
                    cout << "Enter New Marks: ";
                    cin >> students[i].marks;

                    cout << "Record Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found.\n";
        }

        else if (choice == 5) {
            int roll;
            cout << "Enter Roll Number to Delete: ";
            cin >> roll;

            bool found = false;
            for (int i = 0; i < students.size(); i++) {
                if (students[i].roll == roll) {
                    students.erase(students.begin() + i);
                    cout << "Record Deleted Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found.\n";
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