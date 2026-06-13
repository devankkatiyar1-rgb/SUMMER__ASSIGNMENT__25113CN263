// Write a program to Move zeroes to end. 

#include <iostream>
using namespace std;

int main() {


    int n;
cout << "the size of an array   ";
cin >> n;

int array[n];
cout << "the elements of an array are  ";
for(int i = 0;i<n;i++){
cin >> array[i];
}

// move zeroes to forward

int index = 0;

for(int i = 0;i<n;i++){
if(array[i] != 0){
array[index] = array[i];
index++;
}
}

while(index<n){
array[index] = 0;
index++;
}

for(int i = 0;i<n;i++){
cout  << array[i];
}

return 0;
}