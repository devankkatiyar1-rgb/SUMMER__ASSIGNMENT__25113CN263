// Write a program to Selection sort. 

#include <iostream>
using namespace std;

int main() {

int n;


    cout << "Enter size of first array: ";
    cin >> n;

    int array[n];
    cout << "Enter elements of first array: ";
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    for(int i = 0;i<n-1;i++){
    int minindex = i;
    for(int j = i+1;j<n;j++){
    if(array[j] < array[minindex])
    {
    minindex = j;
    }
    }
    

    int temp = array[i];
    array[i] = array[minindex];
    array[minindex] = temp;

}

cout << "the sorted array is" << endl;
for(int i = 0;i<n;i++) {
cout << array[i] << " ";
}

return 0;
}