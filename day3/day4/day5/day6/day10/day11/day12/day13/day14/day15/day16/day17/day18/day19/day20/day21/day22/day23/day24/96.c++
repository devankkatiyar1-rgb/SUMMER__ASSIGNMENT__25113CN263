/*Write a program to Remove duplicate 
characters. */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int freq[256] = {0};
    string result = "";

    for (char ch : str) {
        if (freq[ch] == 0) {
            result += ch;
            freq[ch] = 1;
        }
    }

    cout << "String after removing duplicates: " << result;

    return 0;
}