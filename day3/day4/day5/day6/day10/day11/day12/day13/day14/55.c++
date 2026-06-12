// Write a program to Second largest element. 

#include <iostream>
using namespace std;


int main() {

int n;
cout << "enter the size of an array  ";
cin >> n;

int array[n];
cout << "the elements of array are ";
for(int i = 0;i<n;i++){
cin >> array[i];
}

int maxelement = array[0];
 for(int i = 0;i<n;i++){
if(maxelement < array[i]){
maxelement = array[i];
}
 }
 cout << maxelement ;

int secondmaxelement = -1;

for(int i = 0;i<n;i++){
if(secondmaxelement < array[i] && array[i] != maxelement){
secondmaxelement = array[i];

}
}

cout << "the second max element in array is  " << secondmaxelement;
cout << endl;

return 0;

}