// Write a program to Convert binary to decimal. 

#include <iostream>
using namespace std;

int binaryToDecimal(int binary, int power = 1) {

    if (binary == 0) {
        return 0;
    }

    int digit = binary % 10;

    return (digit * power) + binaryToDecimal(binary / 10, power * 2);
}

int main() {

    int binary;
    cin >> binary;

    cout << "Decimal = " << binaryToDecimal(binary);

    return 0;
}