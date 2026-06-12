// Write a program to Find duplicates in array

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int array[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    // Sort the array
    sort(array, array + n);

    cout << "Duplicate elements are: ";

    for(int i = 0; i < n - 1; i++) {

        if(array[i] == array[i + 1]) {
            cout << array[i] << " ";

            // Skip repeated duplicates
            while(i < n - 1 && array[i] == array[i + 1]) {
                i++;
            }
        }
    }

    return 0;
}