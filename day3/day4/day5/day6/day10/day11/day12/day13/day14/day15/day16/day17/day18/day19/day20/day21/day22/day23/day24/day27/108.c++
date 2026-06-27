/*Write a program to Create marksheet 
generation system.*/

#include <iostream>
using namespace std;

int main() {
    string name;
    int roll;
    float marks[5];
    float total = 0, percentage;
    char grade;

    cout << "===== Marksheet Generation System =====\n";

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    percentage = total / 5;

    // Grade Calculation
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Display Marksheet
    cout << "\n========== MARKSHEET ==========\n";
    cout << "Student Name : " << name << endl;
    cout << "Roll Number  : " << roll << endl;

    cout << "\nMarks:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << " : " << marks[i] << endl;
    }

    cout << "\nTotal Marks : " << total << "/500" << endl;
    cout << "Percentage : " << percentage << "%" << endl;
    cout << "Grade : " << grade << endl;

    if (grade == 'F')
        cout << "Result : Fail\n";
    else
        cout << "Result : Pass\n";

    return 0;
}