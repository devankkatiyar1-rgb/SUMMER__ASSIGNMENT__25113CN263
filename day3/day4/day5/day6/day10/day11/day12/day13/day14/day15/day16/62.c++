// Write a program to Find maximum frequency element

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int array[n];

    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int maxFrequency = 0;
    int maxElement = array[0];

    for(int i = 0; i < n; i++) {

        int frequency = 0;

        for(int j = 0; j < n; j++) {
            if(array[i] == array[j]) {
                frequency++;
            }
        }

        if(frequency > maxFrequency) {
            maxFrequency = frequency;
            maxElement = array[i];
        }
    }

    cout << "Maximum frequency element: " << maxElement << endl;
    cout << "Frequency: " << maxFrequency << endl;

    return 0;
}