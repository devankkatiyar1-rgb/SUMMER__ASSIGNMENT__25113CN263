// Write a program to Recursive sum of digits. 

#include <iostream>
using namespace std;

int sumofdigits(int number){
if(number == 0){
return 0 ;
}
else {
return number % 10 + sumofdigits(number/10) ;

}
}

int main() {
 
cout << sumofdigits(132) << endl;

return 0;

}