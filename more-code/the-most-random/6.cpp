#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    char player;
    char computer;
    player = getUserChoice();
    cout << "You chose: ";
    showChoice(player);
    cout << "\n";
    computer = getComputerChoice();
    cout << "Computer chose: ";
    showChoice(computer);
    cout << "\n";
    chooseWinner(player, computer);
    cout << "****Thank you for playing****\n";
    cout << "*****************************\n";
    return 0; 
}

char getUserChoice() {
    
    char player;
    cout << "*****ROCK-PAPER-SCISSORS*****\n";
    do {
        cout << "*****************************\n";
        cout << "r = rock \np = paper \ns = scissors\n";
        cout << "Enter your choice (r/p/s): ";
        cin >> player;
    } while (player != 'r' && player != 's' && player != 'p');
    return player;
}

char getComputerChoice() {
    srand(time(0));
    int num = rand() % 3; 
    switch (num) {
        case 1: return 'r';
        case 2: return 's';
        case 0: return 'p';
    }
    return 0;
}

void showChoice(char choice) {
    switch (choice) {
        case 'r': 
            cout << "Rock \n";
            break;
        case 'p': 
            cout << "Paper \n";
            break;
        case 's': 
            cout << "Scissors \n";
            break;
    }
}

void chooseWinner(char player, char computer) {
    if (computer == player) {
        cout << "Its a tie!\n\n";
        return;
    }
    switch(player) {
        case 'r': 
            if (computer == 's') {
                cout << "You win" << endl;
                break;
            } else {
                cout << "You lose" << endl;
                break;
            }
        case 's': 
            if (computer == 'p') {
                cout << "You win" << endl;
                break;
            } else {
                cout << "You lose" << endl;
                break;
            }
        case 'p': 
            if (computer == 'r') {
                cout << "You win" << endl;
                break;
            } else {
                cout << "You lose" << endl;
                break;
            }
    }
}