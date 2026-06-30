/*Q114
Write a program to Create menu-driven array operations system.*/


#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, key;
    bool isCreated = false;

    while (true) {
        cout << "\n====== ARRAY OPERATIONS MENU ======\n";
        cout << "1. Create Array\n";
        cout << "2. Display Array\n";
        cout << "3. Search Element\n";
        cout << "4. Find Maximum\n";
        cout << "5. Find Minimum\n";
        cout << "6. Find Sum\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter size of array: ";
            cin >> n;

            cout << "Enter " << n << " elements:\n";
            for (int i = 0; i < n; i++)
                cin >> arr[i];

            isCreated = true;
            cout << "Array Created Successfully!\n";
            break;

        case 2:
            if (!isCreated) {
                cout << "Create the array first!\n";
                break;
            }

            cout << "Array Elements: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;

        case 3:
            if (!isCreated) {
                cout << "Create the array first!\n";
                break;
            }

            cout << "Enter element to search: ";
            cin >> key;

            bool found = false;
            for (int i = 0; i < n; i++) {
                if (arr[i] == key) {
                    cout << "Element found at index " << i << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Element not found.\n";

            break;

        case 4:
            if (!isCreated) {
                cout << "Create the array first!\n";
                break;
            }

            int maximum = arr[0];
            for (int i = 1; i < n; i++)
                if (arr[i] > maximum)
                    maximum = arr[i];

            cout << "Maximum Element = " << maximum << endl;
            break;

        case 5:
            if (!isCreated) {
                cout << "Create the array first!\n";
                break;
            }

            int minimum = arr[0];
            for (int i = 1; i < n; i++)
                if (arr[i] < minimum)
                    minimum = arr[i];

            cout << "Minimum Element = " << minimum << endl;
            break;

        case 6:
            if (!isCreated) {
                cout << "Create the array first!\n";
                break;
            }

            int sum = 0;
            for (int i = 0; i < n; i++)
                sum += arr[i];

            cout << "Sum = " << sum << endl;
            break;

        case 7:
            cout << "Exiting Program...\n";
            return 0;

        default:
            cout << "Invalid Choice!\n";
        }
    }
}