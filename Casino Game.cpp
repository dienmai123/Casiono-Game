#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
using namespace std;
void ruleEasy();
void ruleMedium();
void ruleHard();
int main()
{
    //Variables
    string playerName;
    int balance; // stores player's balance
    int bettingAmount;
    int guess;
    int choiceMode;
    int dice; // stores the random number
    char choice;

    //Get player input
    srand(time(0)); // "Seed" the random generator
    cout << "\n\t\t========WELCOME TO CASINO WORLD=======\n\n";
    cout << "\n\nWhat's your Name : ";
    getline(cin, playerName);
    cout << "\n\nEnter the starting balance to play game : $";
    cin >> balance;
    while (balance < 0) {
        cout << "Please, Enter a number larger than 0: ";
        cin >> balance;
    }
    cout << "\t========Random Number Guessing Game========" << endl;
    cout << "\t\t1: Easy Mode (1-10)" << endl;
    cout << "\t\t2: Medium Mode (1-50)" << endl;
    cout << "\t\t3: Hard Mode (1-100)\n\n" << endl;
    cout << "Enter the mode you would like to play: ";
    cin >> choiceMode;
    while (choiceMode < 1 || choiceMode > 3) {
        cout << "Error. Enter a mode between 1-3: ";
        cin >> choiceMode;
    }

    switch (choiceMode) {
        //MODE EASY     
    case(1):
        do
        {

            ruleEasy();
            cout << "\n\nYour current balance is $ " << balance << "\n";
            // Get player's betting balance
            do
            {
                cout << "Hey, " << playerName << ", enter amount to bet : $";
                cin >> bettingAmount;
                if (bettingAmount > balance)
                    cout << "Betting balance can't be more than current balance!\n"
                    << "\nRe-enter balance\n ";
            } while (bettingAmount > balance);
            // Get player's numbers
            do
            {
                cout << "Guess any betting number between 1 & 10 :";
                cin >> guess;
                if (guess <= 0 || guess > 10)
                    cout << "\nNumber should be between 1 to 10\n"
                    << "Re-enter number:\n ";
            } while (guess <= 0 || guess > 10);
            dice = rand() % 10 + 1;
            if (dice == guess)
            {
                cout << "\n\nYou are in luck!! You have won Rs." << bettingAmount * 10;
                balance += bettingAmount * 2;
            }
            else
            {
                cout << "Oops, better luck next time !! You lost $ " << bettingAmount << "\n";
                balance -= bettingAmount;
            }
            cout << "\nThe winning number was : " << dice << "\n";
            cout << "\n" << playerName << ", You have balance of $ " << balance << "\n";
            if (balance == 0)
            {
                cout << "You have no money to play ";
                break;
            }
            // SEE IF THE USER WANT TO PLAY AGAIAN
            cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choice;
        } while (choice == 'Y' || choice == 'y');
        break;
        //MODE MEDIUM    
    case (2):
        do
        {

            ruleMedium();
            cout << "\n\nYour current balance is $ " << balance << "\n";
            // Get player's betting balance
            do
            {
                cout << "Hey, " << playerName << ", enter amount to bet : $";
                cin >> bettingAmount;
                if (bettingAmount > balance)
                    cout << "Betting balance can't be more than current balance!\n"
                    << "\nRe-enter balance\n ";
            } while (bettingAmount > balance);
            // Get player's numbers
            do
            {
                cout << "Guess any betting number between 1 & 50 :";
                cin >> guess;
                if (guess <= 0 || guess > 50)
                    cout << "\nNumber should be between 1 to 50\n"
                    << "Re-enter number:\n ";
            } while (guess <= 0 || guess > 50);
            dice = rand() % 50 + 1;
            if (dice == guess)
            {
                cout << "\n\nYou are in luck!! You have won Rs." << bettingAmount * 10;
                balance += bettingAmount * 10;
            }
            else
            {
                cout << "Oops, better luck next time !! You lost $ " << bettingAmount << "\n";
                balance -= bettingAmount;
            }
            cout << "\nThe winning number was : " << dice << "\n";
            cout << "\n" << playerName << ", You have balance of $ " << balance << "\n";
            if (balance == 0)
            {
                cout << "You have no money to play ";
                break;
            }
            cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choice;
        } while (choice == 'Y' || choice == 'y');
        break;
        //MODE HARD
    case(3):
        do
        {

            ruleMedium();
            cout << "\n\nYour current balance is $ " << balance << "\n";
            // Get player's betting balance
            do
            {
                cout << "Hey, " << playerName << ", enter amount to bet : $";
                cin >> bettingAmount;
                if (bettingAmount > balance)
                    cout << "Betting balance can't be more than current balance!\n"
                    << "\nRe-enter balance\n ";
            } while (bettingAmount > balance);
            // Get player's numbers
            do
            {
                cout << "Guess any betting number between 1 & 100 :";
                cin >> guess;
                if (guess <= 0 || guess > 100)
                    cout << "\nNumber should be between 1 to 100\n"
                    << "Re-enter number:\n ";
            } while (guess <= 0 || guess > 100);
            dice = rand() % 100 + 1;
            if (dice == guess)
            {
                cout << "\n\nYou are in luck!! You have won Rs." << bettingAmount * 10;
                balance += bettingAmount * 100;
            }
            else
            {
                cout << "Oops, better luck next time !! You lost $ " << bettingAmount << "\n";
                balance -= bettingAmount;
            }
            cout << "\nThe winning number was : " << dice << "\n";
            cout << "\n" << playerName << ", You have balance of $ " << balance << "\n";
            if (balance == 0)
            {
                cout << "You have no money to play ";
                break;
            }
            cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choice;
        } while (choice == 'Y' || choice == 'y');
        break;


    }

    //Rule for easy mode

    cout << "\n\n\n";
    cout << "\n\nThanks for playing the game. Your balance is $ " << balance << "\n\n";
    return 0;
}



//Rule for EASY mode
void ruleEasy()
{

    cout << "\t\t======CASINO NUMBER GUESSING RULES!======\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. Winner gets 2 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}

//Rule for MEDIUM mode
void ruleMedium()
{
    cout << "\t\t======CASINO NUMBER GUESSING RULES!======\n";
    cout << "\t1. Choose a number between 1 to 50\n";
    cout << "\t2. Winner gets 10 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}

//Rule for hard mode
void ruleHard()
{
    cout << "\t\t======CASINO NUMBER GUESSING RULES!======\n";
    cout << "\t1. Choose a number between 1 to 100\n";
    cout << "\t2. Winner gets 100 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}