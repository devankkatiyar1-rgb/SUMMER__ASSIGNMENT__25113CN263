// Write a program to Find product of digits. 

#include <iostream>
using namespace std;

int main() {

int POD = 1,number;

cin >> number;

while(number >0){
int n = number % 10;
POD = n*POD;
number = number/10;
}

cout << POD << endl;
return 0;
}