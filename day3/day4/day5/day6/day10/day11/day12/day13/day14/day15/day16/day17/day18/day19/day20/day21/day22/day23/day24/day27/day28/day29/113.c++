/*Write a program to Create menu-driven calculatorWrite a program to Create menu-driven calculator*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b, result;

    while (true) {
        cout << "\n========== CALCULATOR ==========\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Calculator Closed!\n";
            break;
        }

        if (choice < 1 || choice > 5) {
            cout << "Invalid Choice!\n";
            continue;
        }

        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch (choice) {
            case 1:
                result = a + b;
                cout << "Result = " << result;
                break;

            case 2:
                result = a - b;
                cout << "Result = " << result;
                break;

            case 3:
                result = a * b;
                cout << "Result = " << result;
                break;

            case 4:
                if (b == 0)
                    cout << "Error! Division by zero is not possible.";
                else {
                    result = a / b;
                    cout << "Result = " << result;
                }
                break;
        }

        cout << endl;
    }

    return 0;
}