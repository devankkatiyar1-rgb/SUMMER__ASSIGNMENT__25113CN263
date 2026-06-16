// Write a program to Bubble sort.

#include <iostream>
using namespace std;

int main() {

      int n1;


    cout << "Enter size of first array: ";
    cin >> n1;

    int arr1[n1];
    cout << "Enter elements of first array: ";
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    
    for(int i = 0;i<n1-1;i++){
    bool swap = false;
for(int j = 0;j<n1-1-i;j++){
if(arr1[j] > arr1[j+1]){
int temp = arr1[j];
arr1[j] = arr1[j+1];
arr1[j+1] = temp;
swap = true;
}
}
if(swap == false){
break;
}
}


for(int i = 0;i<n1;i++){
cout << arr1[i] << " ";
cout << endl;
}

return 0;
}