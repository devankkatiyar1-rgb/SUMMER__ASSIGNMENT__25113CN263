/*Write a program to Print character triangle. 
A 
AB 
ABC 
ABCD 
ABCDE */

#include <iostream>
using namespace std;

int main() {

char ch = 'A';

for(int i =65;i<=69;i++){
for(int j = 65;j<=i;j++){
cout << char(j) ;
}
cout << endl;
}
}