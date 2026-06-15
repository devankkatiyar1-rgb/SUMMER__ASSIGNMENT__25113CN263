// Write a program to Union of arrays. 

#include <iostream>
using namespace std;

int main() {

    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    int arr1[n1];
    cout << "Enter elements of first sorted array: ";
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    int arr2[n2];
    cout << "Enter elements of second sorted array: ";
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int unionArray[n1 + n2];
    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2) {

        // Avoid duplicates
        if(i > 0 && arr1[i] == arr1[i - 1]) {
            i++;
            continue;
        }

        if(j > 0 && arr2[j] == arr2[j - 1]) {
            j++;
            continue;
        }

        if(arr1[i] < arr2[j]) {
            unionArray[k] = arr1[i];
            i++;
        }
        else if(arr1[i] > arr2[j]) {
            unionArray[k] = arr2[j];
            j++;
        }
        else {
            unionArray[k] = arr1[i];
            i++;
            j++;
        }

        k++;
    }

    // Remaining elements of first array
    while(i < n1) {

        if(i == 0 || arr1[i] != arr1[i - 1]) {
            unionArray[k] = arr1[i];
            k++;
        }

        i++;
    }

    // Remaining elements of second array
    while(j < n2) {

        if(j == 0 || arr2[j] != arr2[j - 1]) {
            unionArray[k] = arr2[j];
            k++;
        }

        j++;
    }

    cout << "Union of arrays: ";

    for(int i = 0; i < k; i++) {
        cout << unionArray[i] << " ";
    }

    return 0;
}