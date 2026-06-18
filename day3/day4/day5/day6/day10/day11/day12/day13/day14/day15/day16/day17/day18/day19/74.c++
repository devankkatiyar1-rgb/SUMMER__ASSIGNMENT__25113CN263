// Write a program to Subtract matrices. 

#include <iostream>
#include <vector>
using namespace std;
int main() {

    int rows,cols;

cout << "enter the rows and cols of matrices"; // rows and cols are same for both matrices 
cin >> rows >> cols;

vector<vector<int>> A(rows, vector<int>(cols));
vector<vector<int>> B(rows, vector<int>(cols));
vector<vector<int>> Subtract(rows , vector<int>(cols));

cout << "Enter first matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter second matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            Subtract[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Subtract Matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << Subtract[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

