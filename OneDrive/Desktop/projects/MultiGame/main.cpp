#include <iostream>
#include <cstdlib>
#include <ctime>
#include <map>

using namespace std;

int main() {
    int choice;
    bool playAgain = true;

    while (playAgain) {
        cout << "Choose a game to play:" << endl;
        cout << "1. Rock-paper-scissors" << endl;
        cout << "2. Hangman" << endl;
        cout << "3. Tic-tac-toe" << endl;
        cout << "4. Bingo" << endl;
        cout << "5. Stop" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                system("your rock-paper-scissor exe file location");
                break;
            case 2:
                system("your hangman exe file location");
                break;
            case 3:
                system("your tic-tac-toe exe file location");
                break;
            case 4:
                system("bingo exe file location");
                break;
            case 5:
                playAgain = false;
                break;
            default:
                cout << "Invalid choice." << endl;
        }

        if (playAgain) {
            cout << "\nWould you like to play another game? (y/n): ";
            char answer;
            cin >> answer;
            playAgain = (answer == 'y' || answer == 'Y');
        }
    }

    return 0;
}