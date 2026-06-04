// Write a program to Recursive Fibonacci. 

#include <iostream>
using namespace std;

int fibonacci(int n){

if (n == 1 || n == 0){
return n;
}

else {

return fibonacci(n-1) + fibonacci(n-2);
}
}

int main() {

cout << fibonacci(6) << endl;

return 0;
}