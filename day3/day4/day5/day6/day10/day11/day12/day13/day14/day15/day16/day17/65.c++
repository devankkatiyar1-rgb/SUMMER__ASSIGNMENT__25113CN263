// Write a program to Merge arrays. 

#include <iostream>
using namespace std;

int main() {

    int n1;
    cout << "Enter size of first array: ";
    cin >> n1;

    int array1[n1];
    cout << "Enter elements of first sorted array: ";
    for(int i = 0; i < n1; i++) {
        cin >> array1[i];
    }

    int n2;
    cout << "Enter size of second array: ";
    cin >> n2;

    int array2[n2];
    cout << "Enter elements of second sorted array: ";
    for(int i = 0; i < n2; i++) {
        cin >> array2[i];
    }

    int merged[n1 + n2];

    int i = 0, j = 0, k = 0;

    // Merge arrays
    while(i < n1 && j < n2) {

        if(array1[i] < array2[j]) {
            merged[k] = array1[i];
            i++;
        }
        else {
            merged[k] = array2[j];
            j++;
        }

        k++;
    }

    // Remaining elements of first array
    while(i < n1) {
        merged[k] = array1[i];
        i++;
        k++;
    }

    // Remaining elements of second array
    while(j < n2) {
        merged[k] = array2[j];
        j++;
        k++;
    }

    cout << "Merged array: ";

    for(int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}