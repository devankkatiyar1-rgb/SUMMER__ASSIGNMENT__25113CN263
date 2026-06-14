// Write a program to Remove duplicates from array;
#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int array[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Array after removing duplicates: ";

    for(int i = 0; i < n; i++) {

        bool isDuplicate = false;

        // Check if element appeared before
        for(int j = 0; j < i; j++) {
            if(array[i] == array[j]) {
                isDuplicate = true;
                break;
            }
        }

        // Print only unique elements
        if(!isDuplicate) {
            cout << array[i] << " ";
        }
    }

    return 0;
}