// Write a program to Convert decimal to binary

#include <iostream>
using namespace std;


void decimaltobinary(int number ){
if(number == 0){
return ;
}

decimaltobinary(number/2);  
cout << number % 2;

}
int main() {

int number ;
cin>>number;

if(number == 0){
cout << 0;
}

else {
decimaltobinary(number);
}




return 0;
}