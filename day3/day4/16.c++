// Write a program to Print Armstrong numbers in a range 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    
    
    cout << "Enter lower limit: ";
    cin >> start;
    cout << "Enter upper limit: ";
    cin >> end;

    cout << "Armstrong numbers in this range are: " << endl;

    
    for (int i = start; i <= end; i++) {
        
        int digits = 0;
        int result = 0;
        
        
        int number = i; 
        int original = number; 
        int num = number;

       
        while(number > 0) {
            digits++;
            number = number / 10;
        }

        
        while(num > 0) {
            int rem = num % 10;
            
            result = result + round(pow(rem, digits)); 
            num = num / 10;
        }

        
        if(result == original) {
            cout << original << " ";
        }
    }

    cout << endl;
    return 0;
}