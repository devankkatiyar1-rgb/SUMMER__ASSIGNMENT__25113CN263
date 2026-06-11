/*Write a program to Count even and odd 
elements.*/

#include <iostream>
using namespace std;

int main() {

int even = 0;
int odd = 0;
int rangestart;
int rangeend;

cout << "enter the range of numbers";
cin >> rangestart >> rangeend;


for(int i = rangestart;i<=rangeend;i++){
if(i%2 == 0){
even++;
}
else {
odd++;
}
}

cout << " the no. of even numbers in this range are " << even;
cout << " the no. of odd numbers in this range are " << odd;



return 0;
}