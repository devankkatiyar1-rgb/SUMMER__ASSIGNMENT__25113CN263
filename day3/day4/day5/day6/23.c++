// Write a program to Count set bits in a number. 

#include <iostream>
using namespace std;

int main() {

int number, count = 0 ;

cin >> number;

while(number > 0){
if(number % 2 == 1){
count ++;

}
number = number / 2;
}

cout << count << endl;
return 0;
}