// Write a program to Find row-wise sum. 

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int rows,cols;

cout << "enter the size of matrix";
cin >> rows >> cols;

vector<vector<int>> matrix(rows,vector<int>(cols));

cout << "enter the elements of matrix";
for(int i = 0;i<rows;i++){
for(int j = 0;j<cols;j++){
cin >> matrix[i][j];

}
}

cout << " /nrow - wise sums are : \n";
for(int i = 0;i<rows;i++){
int sum = 0;
for(int j = 0;j<cols;j++){
sum += matrix[i][j];
}

cout << "sum of row" << i+1 <<  " = " << sum << endl;
}

return 0;
}