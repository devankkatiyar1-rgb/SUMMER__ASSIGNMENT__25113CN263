// Write a program to Intersection of arrays
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

    int result[n1 + n2];

    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2) {

        if(array1[i] < array2[j]) {
            result[k] = array1[i];
            i++;
            k++;
        }
        else if(array1[i] > array2[j]) {
            result[k] = array2[j];
            j++;
            k++;
        }
        else {
            result[k] = array1[i];
            i++;
            j++;
            k++;
        }
    }

    // Remaining elements
    while(i < n1) {
        result[k] = array1[i];
        i++;
        k++;
    }

    while(j < n2) {
        result[k] = array2[j];
        j++;
        k++;
    }

    cout << "Union array: ";

    for(int i = 0; i < k; i++) {
        cout << result[i] << " ";
    }

    return 0;
}