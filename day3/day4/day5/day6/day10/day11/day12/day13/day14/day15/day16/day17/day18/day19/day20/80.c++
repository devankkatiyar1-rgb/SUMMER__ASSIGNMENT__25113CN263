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

for(int j = 0;j<cols;j++){
int sum = 0;
for(int i = 0;i<rows;i++){
sum += matrix[i][j];
}

cout << "column " << j+1 << "sum = " << sum << endl;
}

return 0;
}