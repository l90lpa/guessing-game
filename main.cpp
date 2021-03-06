//  main.cpp
//  First
//
//  Created by Liam on 21/12/2015.
//  Copyright © 2015 Liam. All rights reserved.
//

#include <iostream>
#include "randomNumberGenerator.h"


int main()
{
    using namespace std;
    
    cout << "\nLet's play a game, I'm thinking of a number from 0 to 100, and you have 7 tries to guess the number. Begin!\n";
    
    char choice = 'y';
    while (choice == 'y')
    {
        int randomNumber = randonNumberGenerator();
        
        int guess = -1;
        for (int count = 1; (guess != randomNumber) && (count < 8) ; count++)
        {
            cout << "\nGuess #" << count << " ";
            cin >> guess;
            if (guess > randomNumber)
                cout << "You guessed too high!";
            else if(guess < randomNumber)
                cout << "You guessed too low!";
            else
                break;
        };
        if (guess == randomNumber)
            cout << "\nCorrect, my number was " << randomNumber << ", you WIN!\n";
        else
            cout << "\nSorry, you're all out off guesses, you lost. My number was " << randomNumber << "\n";
    
        do
        {
            cout << "Would you like to play again? y/n: ";
            cin >> choice;
        }
        while ((choice != 'y') && (choice != 'n'));
    };
   
    cout << "\nThanks for playing! See you again soon hot shot!\n";
    
    return 0;
}
