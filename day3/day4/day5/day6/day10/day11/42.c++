// Write a program to Write function to find maximum

#include <iostream>
using namespace std;


int maximum(int a , int b){
if(a>b){
return a;
}
else {
return b;
}
}
int main() {

int a,b;

cout << "enter two numbers" << " ";
cin >> a >> b;
cout << "the greater number is"<< " " << maximum(a,b);

return 0;
}
