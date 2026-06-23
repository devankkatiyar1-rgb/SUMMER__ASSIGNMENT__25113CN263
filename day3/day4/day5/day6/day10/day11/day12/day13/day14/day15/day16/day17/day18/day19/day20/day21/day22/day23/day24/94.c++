// Write a program to Compress a string. 
#include <iostream>
using namespace std;

int main() {


string str;

cout << "enter a string";
cin >> str;

string result = "";
int count = 1;

for(int i = 0;i<str.length();i++ ){
if(str[i] == str[i+1]){
count++;
}
else {
result += str[i];
result += to_string(count);
count = 1;
}
}

 cout << "Compressed String: " << result;

 return 0;

}