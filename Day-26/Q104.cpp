//WAP to create quiz application.

#include <iostream>
using namespace std;

int main(){
    int score = 0;
    char answer;

    while(1){
        
        cout << "\n      QUIZ APPLICATION      \n";
    
        cout << "\nQ1. What is the capital of India?\n";
        cout << "a) Mumbai\n";
        cout << "b) Delhi\n";
        cout << "c) Kolkata\n";
        cout << "d) Chennai\n";
    
        cout << "Enter Answer: ";
        cin >> answer;
    
        if(answer == 'b' || answer == 'B')
        {
            cout << "Correct Answer!\n";
            score++;
        }
        else
        {
            cout << "Wrong Answer!\n";
        }
    
        cout << "\nQ2. How many days are there in a week?\n";
        cout << "a) 5\n";
        cout << "b) 6\n";
        cout << "c) 7\n";
        cout << "d) 8\n";
    
        cout << "Enter Answer: ";
        cin >> answer;
    
        if(answer == 'c' || answer == 'C')
        {
            cout << "Correct Answer!\n";
            score++;
        }
        else
        {
            cout << "Wrong Answer!\n";
        }
    
        cout << "\nQ3. C++ was developed by?\n";
        cout << "a) Dennis Ritchie\n";
        cout << "b) Bjarne Stroustrup\n";
        cout << "c) James Gosling\n";
        cout << "d) Guido van Rossum\n";
    
        cout << "Enter Answer: ";
        cin >> answer;
    
        if(answer == 'b' || answer == 'B')
        {
            cout << "Correct Answer!\n";
            score++;
        }
        else
        {
            cout << "Wrong Answer!\n";
        }
    
        cout << "\n      RESULT      \n";
        cout << "Total Score: " << score << "/3\n";
    
        if(score == 3)
        {
            cout << "Excellent!\n";
        }
        else if(score == 2)
        {
            cout << "Good!\n";
        }
        else
        {
            cout << "Keep Practicing!\n";
        }
    }
    return 0;
}