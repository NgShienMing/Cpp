#include <iostream>
#include <time.h>

using namespace std;

int main() 
{
    srand((unsigned) time(0));
    int secretNum = (rand() % 100) + 1;
    int guess;
    int guessLimit = 10;
    cout << "Guess a number between 1 and 100." << endl;
    cout << "You have " << guessLimit << " guesses." << endl;
    while (guess != secretNum && guessLimit != 0)
    {
        cout << "Enter guess: ";
        cin >> guess;
        guessLimit--;
        if (guess > secretNum && guessLimit != 0)
        {
            cout << "Guess a smaller number." << endl;
        }
        else if (guess < secretNum && guessLimit != 0)
        {
            cout << "Guess a larger number." << endl;
        }
        cout << "You have " << guessLimit << " guesses left." << endl;
    }
    if (guess == secretNum)
    {
        cout << "Guess is correct! " << "You win!" << endl;
    }
    else
    {
        cout << "Secret number is " << secretNum << ". You lose." << endl;
    }
    return 0;
}