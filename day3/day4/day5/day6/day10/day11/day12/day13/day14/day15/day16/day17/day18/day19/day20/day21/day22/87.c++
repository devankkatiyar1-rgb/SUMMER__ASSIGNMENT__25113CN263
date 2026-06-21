// Write a program to Character frequency. 

#include <iostream>
#include <string>
using namespace std;

int main() {

string str;
 
cout << "enter a string";
getline(cin,str);

for(int i = 0;i<str.length();i++){
int count = 1;
for(int j = i+1;j<str.length();j++){
if(str[i] == str[j]) {
count++;
}
}

cout << str[i] << " =" << count << endl;
}
return 0;
}
