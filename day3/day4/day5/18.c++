// Write a program to Check strong number. 

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int original = number;
    int sum = 0;

   
    while (number > 0) {
        int rem = number % 10;

        
        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        number = number / 10;
    }

    
    if (sum == original) {
        cout << original << " is a Strong number.";
    } else {
        cout << original << " is not a Strong number.";
    }

    cout << endl;
    return 0;
}

