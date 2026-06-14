// Write a program to Find missing number in array

#include <iostream>
using namespace std;

int main() {


int n;
cout << "the size of an array ";
cin >> n;

int array[n];
cout << "the elements of an array are  ";
for(int i = 0;i<n;i++){
cin >> array[i];
}

int missingnumber;
int sum = (n+1)*(n+2)/2;
int sumofA = 0;

for(int i = 0;i<n;i++){
sumofA = sumofA + array[i];

}

missingnumber = sum - sumofA;

cout << "the missing number in array is  ";
cout << missingnumber << endl;

return 0;
}