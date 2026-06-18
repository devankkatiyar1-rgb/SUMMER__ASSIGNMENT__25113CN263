// Write a program to Find diagonal sum.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    vector<vector<int>> A(n, vector<int>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += A[i][i];           // primary diagonal
        sum += A[i][n - 1 - i];  // secondary diagonal
    }

    if(n % 2 == 1) {
        sum -= A[n/2][n/2];
    }

    cout << "Sum of diagonal elements = " << sum;

    return 0;
}