/*Write a program to Find maximum occurring 
character.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};

    // Count frequency of each character
    for (char ch : str) {
        freq[ch]++;
    }

    char maxChar = str[0];
    int maxFreq = freq[str[0]];

    // Find character with maximum frequency
    for (char ch : str) {
        if (freq[ch] > maxFreq) {
            maxFreq = freq[ch];
            maxChar = ch;
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxFreq;

    return 0;
}