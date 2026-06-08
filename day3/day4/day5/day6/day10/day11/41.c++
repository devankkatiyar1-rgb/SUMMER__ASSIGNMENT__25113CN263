// Write a program to Write function to find sum of two numbers.

#include <iostream>
using namespace std;


int sumoftwonumber(int number1,int number2){
return number1+number2;
}

int main() {

int number1,number2;
cin >> number1;
cin >> number2;

cout << sumoftwonumber(number1,number2);

return 0;
}
