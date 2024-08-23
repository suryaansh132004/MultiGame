#include <iostream>
#include <cstdlib>
#include <ctime>
#include <map>

using namespace std;

int main() {
    srand(time(nullptr));

    // Map to store choices and their corresponding values
    map<char, int> choiceMap = {
            {'r', -1},
            {'p', 1},
            {'s', 0}
    };

    // Map to store values and their corresponding choices
    map<int, string> reverseMap = {
            {-1, "rock"},
            {1, "paper"},
            {0, "scissors"}
    };

    // Generate computer's choice randomly
    int computerChoice = rand() % 3 - 1;

    // Get user's input and validate it
    char userChoice;
    do {
        cout << "Enter your choice (r for rock, p for paper, s for scissors): ";
        cin >> userChoice;
    } while (choiceMap.find(userChoice) == choiceMap.end());

    // Get the corresponding value for user's choice
    int userValue = choiceMap[userChoice];

    // Display choices
    cout << "You chose " << reverseMap[userValue] << endl;
    cout << "Computer chose " << reverseMap[computerChoice] << endl;

    // Determine the winner using the simplified logic
    if ((computerChoice - userValue) == -1 || (computerChoice - userValue) == 2) {
        cout << "You lose :(" << endl;
    } else {
        cout << "You win!!" << endl;
    }

    return 0;
}