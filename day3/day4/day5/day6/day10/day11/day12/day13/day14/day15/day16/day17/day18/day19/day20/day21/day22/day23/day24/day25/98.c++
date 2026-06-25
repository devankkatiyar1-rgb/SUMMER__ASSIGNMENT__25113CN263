/*Write a program to Find common characters 
in strings. */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    getline(cin, s1);

    cout << "Enter second string: ";
    getline(cin, s2);

    int freq[256] = {0};

    // Store characters of first string
    for (int i = 0; i < s1.length(); i++) {
        freq[s1[i]] = 1;
    }

    cout << "Common characters are: ";

    // Check characters of second string
    for (int i = 0; i < s2.length(); i++) {
        if (freq[s2[i]] == 1) {
            cout << s2[i] << " ";
            freq[s2[i]] = 0;   // to avoid duplicate printing
        }
    }

    return 0;
}