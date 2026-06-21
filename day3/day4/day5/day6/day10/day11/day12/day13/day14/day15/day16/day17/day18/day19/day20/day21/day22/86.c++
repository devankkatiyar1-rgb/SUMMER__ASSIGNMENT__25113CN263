/*Write a program to Count words in a 
sentence. */

#include <iostream>
#include <string>
using namespace std;

int main() {

string str;

cout << "enter a sentence";
getline(cin , str);

int count = 0;

for(int i = 0;i<str.length();i++){
if(str[i] != ' ' && (i == 0 || str[i-1] == ' ')){
count++;
}
}

cout << "number of words = " << count;

return 0;
}

