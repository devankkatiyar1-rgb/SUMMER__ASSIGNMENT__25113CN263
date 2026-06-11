/*Write a program to Find largest and smallest 
element. */

#include <iostream>
using namespace std;

int main() {

int n;
cout << "enter the size of an array ";
cin >> n;

cout << "the elements of an array are ";
int array[n];
for(int i = 0;i<n;i++){
cin >> array[i];
}

int max;
 max = array[0];

for(int i = 0;i<n;i++){
if(array[i] > max){
max = array[i];
}
}

int min = array[0];
for(int i = 0;i<n;i++){
if(array[i]<min){
min = array[i];
}
}
cout << "the max element is   " <<   max;
cout << " the min element is  " << min << endl; 


return 0;
}