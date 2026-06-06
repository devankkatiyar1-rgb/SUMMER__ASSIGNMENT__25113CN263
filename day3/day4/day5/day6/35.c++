/*
Write a program to Print repeated character 
pattern. 
A 
BB 
CCC 
DDDD 
EEEEE*/

#include <iostream>
using namespace std;

int main() {

char ch = 'A'; // ascii value of A = 65

for(int i =65;i<=69;i++ ){
for(int j = 65;j<=i;j++){
cout << char(i);
}
cout << endl;
}

return 0;
}