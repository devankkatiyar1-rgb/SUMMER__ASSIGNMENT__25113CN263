// Write a program to Check symmetric matrix.

#include <iostream>
#include <vector>
using namespace std;

int main() {

int n;

cout << "enter the size of matrix";
cin >> n;

vector<vector<int>> matrix(n,vector<int>(n));

cout << "enter the elements of matrix";
for(int i = 0;i<n;i++){
for(int j = 0;j<n;j++){
cin >> matrix[i][j];

}
}
bool symmetric = true;

for(int i = 0;i<n;i++){
for(int j = 0;j<n;j++){
if(matrix[i][j] != matrix[j][i]){
symmetric = false;
break;
}


}
if(symmetric == false){
break;
}
}

if(symmetric){
cout << "symmetric";
}

else {
cout << "matrix is not symmetric";
}

return 0;
}
