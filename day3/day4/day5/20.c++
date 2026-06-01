// Write a program to Find largest prime factor.


#include <iostream>
using namespace std;

long long getLargestPrimeFactor(long long n) {
    long long largest = -1;

    
    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }

    
    for (long long factor = 3; factor * factor <= n; factor += 2) {
        while (n % factor == 0) {
            largest = factor;
            n /= factor;
        }
    }

    
    if (n > 2) {
        largest = n;
    }

    return largest;
}

int main() {
    long long number;
    cout << "Enter a number: ";
    cin >> number;

    if (number <= 1) {
        cout << "Numbers less than or equal to 1 do not have prime factors." << std::endl;
    } else {
        cout << "The largest prime factor of " << number << " is: " 
                  << getLargestPrimeFactor(number) << std::endl;
    }

    return 0;
}