// Write a program to Check perfect number. 

#include <iostream>
using namespace std;

int main () {

int number,sum = 0;

cin >> number;

for(int i = 1;i<=number/2;i++){
if(number % i == 0){
sum  = sum + i;
}
}

if( sum  == number)
{
cout << "the number is perfect number";
}
else {
cout << "the number is not perfect number";
}

return 0;
}