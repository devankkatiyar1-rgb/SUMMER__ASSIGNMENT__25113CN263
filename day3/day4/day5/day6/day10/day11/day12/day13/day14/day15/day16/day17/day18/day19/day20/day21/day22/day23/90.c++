/*Write a program to Find first repeating 
character. */

#include <iostream>
#include <string>
using namespace std;

int main() {

string str;

cout << "enter a string";
getline(cin,str);

int frequency[256] = {0};

for(char ch : str){
frequency[ch]++;
}

// Find first non-repeating character
    for (char ch : str) {
        if (frequency[ch] == 2 || frequency[ch] > 2) {
            cout << "First -repeating character: " << ch;
            return 0;
        }
    }

    cout << "- no repeating character found.";


}