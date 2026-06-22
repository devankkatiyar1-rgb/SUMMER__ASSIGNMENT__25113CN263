/*/Write a program to Find first non-repeating 
character.*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;

    cout << "enter a string";
    getline(cin,str);

    int freq[256] = {0};

for (char ch : str) {
        freq[ch]++;
    }

    // Find first non-repeating character
    for (char ch : str) {
        if (freq[ch] == 1) {
            cout << "First non-repeating character: " << ch;
            return 0;
        }
    }

    cout << "No non-repeating character found.";


return 0;
}