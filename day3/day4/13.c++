// Write a program to Generate Fibonacci series. 
#include <iostream>
using namespace std;

int main() {

int numberofterms ;
cin >> numberofterms;
int a = 0;
int b = 1;
int next;

for(int i = 0;i<numberofterms;i++){

cout << a << " ";
next = a + b;
a = b;
b = next ;

}

return 0;
}
