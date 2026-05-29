#include <iostream>
using namespace std;

int main() {

int number;
int count = 0;;
cin >> number;

while(number > 0)
{

int n = number %10;
count ++;
number = number /10;

}
cout << count << endl;
return 0;
}