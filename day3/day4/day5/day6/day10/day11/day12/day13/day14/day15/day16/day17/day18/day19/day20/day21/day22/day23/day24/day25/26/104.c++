// Write a program to Create quiz application. 

#include <iostream>
using namespace std;

int main() {
    int answer, score = 0;

    cout << "===== Welcome to the Quiz =====\n\n";

    // Question 1
    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is used for C++?\n";
    cout << "1. Programming\n2. Markup\n3. Database\n4. Styling\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 1)
        score++;

    // Question 3
    cout << "\n3. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;

    // Question 4
    cout << "\n4. Which planet is known as the Red Planet?\n";
    cout << "1. Earth\n2. Mars\n3. Venus\n4. Jupiter\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    // Question 5
    cout << "\n5. 10 + 20 = ?\n";
    cout << "1. 20\n2. 25\n3. 30\n4. 40\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;

    cout << "\n===== Quiz Finished =====\n";
    cout << "Your Score: " << score << " out of 5\n";

    if (score == 5)
        cout << "Excellent!" << endl;
    else if (score >= 3)
        cout << "Good Job!" << endl;
    else
        cout << "Better Luck Next Time!" << endl;

    return 0;
}