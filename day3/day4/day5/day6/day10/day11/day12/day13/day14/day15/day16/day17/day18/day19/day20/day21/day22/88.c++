/*Write a program to Remove spaces from 
string*/

#include <iostream>
#include <string>
using namespace std;

int main() {

string str;

cout << "enter a string ";
getline(cin,str);

string result = "";

for(char ch : str){
if(ch != ' '){
result += ch;
}

}

cout << "string after removing spaces ";
cout << result;

return 0;
}

