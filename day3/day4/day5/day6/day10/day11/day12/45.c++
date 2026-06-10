// Write a program to Write function for palindrome. 

#include <iostream>
using namespace std;

bool ispallindrome(int n){

if(n<0){
return false; // as negative numbers are not pallindrome
}

int original = n;
int reverse = 0;

while(n>0){
int remainder = n%10;
reverse = reverse*10 + remainder;
n = n/10;
}
return original == reverse;
}

int main() {
int num;

    cout << "Enter a number: ";
    cin >> num;
if (ispallindrome(num)) {
        cout << "Palindrome Number";
    } else {
        cout << "Not a Palindrome Number";
    }

    return 0;
}


