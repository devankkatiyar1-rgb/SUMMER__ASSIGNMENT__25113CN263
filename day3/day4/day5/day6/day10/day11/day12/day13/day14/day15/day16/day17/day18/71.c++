// Write a program to Binary search. 

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int start = 0, end = n - 1;
    int found = -1;

    while(start <= end) {

        int mid = start + (end - start)/2;

        if(arr[mid] == target) {
            found = mid;
            break;
        }
        else if(arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    if(found != -1) {
        cout << "Element found at index: " << found;
    }
    else {
        cout << "Element not found";
    }

    return 0;
}