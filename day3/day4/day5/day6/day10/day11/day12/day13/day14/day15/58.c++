// Write a program to Rotate array left. 


#include <iostream>
#include <algorithm>
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

int k;
cout << "how much u want left rotation in array   ";
cin >> k;

k = k%n;  //  for bigger value of k 

 reverse(array, array + k);
    reverse(array + k, array + n);
    reverse(array, array+ n);

    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;

}
