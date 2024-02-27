//----------------------------------------------------------------------------------------------
//Author: Antonio Contreras/Chris Sot
//NCC CSCE 306 Software as OOP Spring 2024
//LiveRace 2 0f 4 - MicroGame
//Description: This project is for a game where you wager on whether it is true or false. Points are awarded/deducted based on guesses.
//Documentation via chat.openai
//----------------------------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    int bank = 100; // Starting bank balance
    int counter = 0; // Number of plays
    int wins = 0; // Number of wins
    int losses = 0; // Number of losses

    srand(time(0)); // Seed for random number generator

    cout << "Welcome to the Micro Game!\n";
    cout << "You have 100 points in your bank. Place your wagers and guess!\n";
    
    while (true) {
        cout << "\nCurrent Bank Balance: " << bank << " points\n";
        cout << "Enter your wager (or type 'exit' to quit): ";
        string input;
        getline(cin, input);

        if (input == "exit") {
            break;
        }

        int wager = stoi(input);
        if (wager <= 0 || wager > bank) {
            cout << "Invalid wager. Please enter a valid wager.\n";
            continue;
        }

        counter++;

        // Generate a random outcome
        bool randomOutcome = rand() % 2 == 0; // 50% chance of true/false

        cout << "Guess (true/false): ";
        string guess;
        getline(cin, guess);

        bool userGuess;
        if (guess == "true") {
            userGuess = true;
        } else if (guess == "false") {
            userGuess = false;
        } else {
            cout << "Invalid guess. Please enter 'true' or 'false'.\n";
            continue;
        }

        // Check user's guess and update bank balance
        if (userGuess == randomOutcome) {
            bank += wager;
            wins++;
            cout << "Congratulations! You won " << wager << " points.\n";
        } else {
            bank -= wager;
            losses++;
            cout << "Sorry, you lost " << wager << " points.\n";
        }
    }

    // Display final statistics
    cout << "\nFinal Statistics:\n";
    cout << "Plays: " << counter << endl;
    cout << "Wins: " << wins << endl;
    cout << "Losses: " << losses << endl;
    cout << "Final Bank Balance: " << bank << " points\n";

    return 0;
}
