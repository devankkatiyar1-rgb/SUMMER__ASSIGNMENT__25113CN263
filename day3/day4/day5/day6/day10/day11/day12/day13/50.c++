// Write a program to Find sum and average of array

#include <iostream>
using namespace std;

int main() {

int n;
cout << "enter the size of an array   ";
cin >> n;

int array[n];
for(int i = 0;i<n;i++){
cin >> array[i];
}

int sum = 0;
for(int i = 0;i<n;i++){
sum = sum + array[i];
}
int average = sum / n;

cout << "the sum is   " << sum << "  " <<" and average of an array   " << average ;
 cout << endl;
}