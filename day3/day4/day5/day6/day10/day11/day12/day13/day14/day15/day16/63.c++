// Write a program to Find pair with given sum


#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "the size of an array ";
    cin >> n;

    int array[n];

    cout << "the elements of an array are ";
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int sum;
    cout << "the sum u want ";
    cin >> sum;

    bool found = false;

    for(int k = 0; k < n; k++) {
        for(int j = k + 1; j < n; j++) {

            if(array[k] + array[j] == sum) {
                cout << "pairs are " << array[k] 
                     << " and " << array[j] << endl;
                found = true;
                break;
            }
        }

        if(found) {
            break;
        }
    }

    if(!found) {
        cout << "No pair found";
    }

    return 0;
}