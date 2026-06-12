// Write a program to Linear search. 

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
int target; 
cout << "enter the target element";
cin >> target ;

bool found = false;

for(int i = 0;i<n;i++){
if(array[i] == target){
bool found = true;
cout << "the target is found at index " << i;
break;
}
}

if(found = false){
cout << "the target is not found ";
}

cout << endl;

return 0;

}