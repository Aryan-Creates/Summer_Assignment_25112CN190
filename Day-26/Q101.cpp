//WAP to create a number guessing game.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int num, guess = 0, attempts = 0;
    srand(time(0));

    num = rand() % 100 + 1;

    cout << "GUESS A NUMBER BETWEEN 1 TO 100\n";
    while (guess != num){
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if(guess > num){
            cout << "Lower!\n";
        }
        else if(guess < num){
            cout << "Higher!\n";
        }
        else{
            cout << "CONGRATULATIONS! YOU GUESSED CORRECTLY.\n";
            cout << "You guessed the number in "<< attempts << " attempts.\n";
        }
    }
    return 0;
}