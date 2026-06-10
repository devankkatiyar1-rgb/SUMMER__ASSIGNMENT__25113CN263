// perfect number

#include <iostream>
using namespace std;

bool isperfectnumber(int n){
int sum = 0;
for(int i = 1;i<n;i++){
if(n%i == 0){
sum = sum + i;
}
}
if(sum == n){
return true;
}
return false;
}

int main() {

int n;
cin>> n;

cout << isperfectnumber(n) << endl;

return 0;
}