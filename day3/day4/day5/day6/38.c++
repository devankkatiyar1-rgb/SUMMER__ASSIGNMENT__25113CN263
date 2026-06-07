/*Write a program to Print reverse pyramid. 
********* 
 ******* 
  ***** 
   *** 
    *   */

    #include <iostream>
using namespace std;

int main() {

    int n = 5; // number of rows

    for(int i = 1; i <= n; i++) {

        // print spaces
        for(int j = 1; j < i; j++) {
            cout << " ";
        }

        // print stars
        for(int j = 1; j <= (2 * (n - i) + 1); j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}