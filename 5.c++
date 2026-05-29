// Write a program to Find sum of digits of a number

#include <iostream>
using namespace std;

int main() {

int SOD = 0,number,n;

cin >> number ;

while(number > 0){
n = number % 10;
number = number /10;
SOD = n + SOD;
}

cout << SOD << endl;


return 0;
}