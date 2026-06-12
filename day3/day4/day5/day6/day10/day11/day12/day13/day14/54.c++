// Write a program to Frequency of an element.

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

int element;
cout << "enter the element whose frequencu u want to know";
cin >> element;

int frequency = 0;
for(int i = 0;i<n;i++){
if(array[i] == element){
    frequency++;

}
}

cout << "the frequency of an  element is  " << frequency << endl;



return 0;

}





