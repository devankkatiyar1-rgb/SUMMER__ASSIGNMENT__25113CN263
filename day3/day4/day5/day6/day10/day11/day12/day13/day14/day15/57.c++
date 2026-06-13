// Write a program to Reverse array

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];
    int reverse[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        reverse[i] = arr[n - 1 - i];
    }

    cout << "Reversed array:  ";

    for(int i = 0; i < n; i++) {
        cout << reverse[i] << " ";
    }

    return 0;
}