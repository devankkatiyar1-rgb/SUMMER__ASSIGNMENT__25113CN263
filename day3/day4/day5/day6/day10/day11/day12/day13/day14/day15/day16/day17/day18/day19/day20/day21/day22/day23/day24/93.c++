// Write a program to Check string rotation. 
#include <iostream>
#include <string>
using namespace std;

int main() {

string s1,s2;

cout << "enter first string";
cin >> s1;

cout << "enter second string";
cin >> s2;

if(s1.length() != s2.length()){
cout << "not rotation";
return 0;
}

string temp = s1 + s1;

if(temp.find(s2) != string::npos){
cout << "rotation";
}
else {
cout << "not rotation";
}


return 0;

}