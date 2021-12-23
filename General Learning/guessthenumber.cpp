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
        if (guess > secretNum)
        {
            cout << "Guess a smaller number." << endl;
        }
        else if (guess < secretNum)
        {
            cout << "Guess a larger number." << endl;
        }
        guessLimit--;
        cout << "You have " << guessLimit << " guesses left." << endl;
    }
    cout << "Secret number is " << secretNum << ". Guess is correct!" << endl;
    return 0;
}