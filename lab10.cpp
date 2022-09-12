#include <iostream> 
using namespace std;
int main ()
{
        char Answer;
        int RandomNumber;
        int Guess;
        srand (99);
        RandomNumber = rand() % 10 + 1;
        cout << "Would you like to play? (enter y or n)" << endl;
        cin >> Answer;
        if (Answer == 'n')
        {
                cout << "Thanks for playing. Come back again." << endl;
        }
        else if (Answer == 'y')
        {
                cout << "Enter your guess" << endl;
                cin >> Guess;
        }
        while (Answer == 'y') 
        {
                if (Guess < RandomNumber)
                {
                        cout << "Your guess is less than the random number." << endl;
                        cout << "Enter your guess" << endl;
                        cin >> Guess;
                }
                else if (Guess > RandomNumber)
                {
                        cout << "Your guess is greater than the random number." << endl;
                        cout << "Enter your guess" << endl;
                        cin >> Guess;
                }
                else if (Guess == RandomNumber)
                {
                       cout << "Congratulations. You guessed correctly." << endl;
                       cout << "Would you like to play again? (enter y or n)" << endl;
                       cin >> Answer;             
                       if (Answer == 'n')
                       {
                               cout << "Thanks for playing. Come back again." << endl;
                       }
                       else if (Answer == 'y')
                       {
                               cout << "Enter your guess" << endl;
                               cin >> Guess;
                       }
                       RandomNumber = rand() % 10 + 1;

                }       
        }
        return 0;
}

