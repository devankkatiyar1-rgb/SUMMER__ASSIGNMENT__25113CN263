

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

    int i = 0, j = 0;

    cout << "Common elements are: ";

    while(i < n1 && j < n2) {

        if(array1[i] < array2[j]) {
            i++;
        }
        else if(array1[i] > array2[j]) {
            j++;
        }
        else {
            cout << array1[i] << " ";
            i++;
            j++;
        }
    }

    return 0;
}