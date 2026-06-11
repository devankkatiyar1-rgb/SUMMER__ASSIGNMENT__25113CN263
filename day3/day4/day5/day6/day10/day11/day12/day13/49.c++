// Write a program to Input and display array.

#include <iostream>
using namespace std;

int main() {

int n;

cout << "enter the no. of elements in array";
cin>>n;


int array[n];
for(int i = 0;i<n;i++){
cin >> array[i];
}


cout << "array elements are ";
for(int i = 0;i<n;i++){
cout << array[i] << "  ";
}

cout << endl;

return 0;
}