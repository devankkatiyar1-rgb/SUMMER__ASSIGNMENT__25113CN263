// Write a program to Check palindrome string.

#include <iostream>
#include <string>


using namespace std;

int main() {

string str;

cout << "enter a string";
cin >> str;

int start = 0;
int end = str.length() - 1;


while(start < end)  {
if(str[start] != str[end]){
cout << "not pallindrme";
return 0;

}
start++;
end--;


}

cout << "pallindrome";

return 0;
}