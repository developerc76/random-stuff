#include <iostream>

using namespace std;

int main() {

    string questions[] =    {"1. What is the best OS? ", 
                             "2. Who created Linux? ",
                             "3. What does RHEL stand for? ",
                             "4. Is the Earth flat? "};
    string options[][4] =   {{"A. Windows", "B. MacOS", "C. Linux", "D. BSD"}, 
                             {"A. Bill Gates", "B. Linus Torvalds", "C. Steve Jobs", "D. i use arch btw"}, 
                             {"A. Red Hat Enterprise Linux", "B. Ringing Hills Emerald Linux", "C. Rugged Hill Enterprise Lambo", "D. What is RHEL? "}, 
                             {"A. Why are you asking?", "B. No", "C. I don't know", "D. Yes"}};
    char answerKey[] = {'C', 'B', 'A', 'D'};

    int size = sizeof(questions)/sizeof(questions[0]);
    int score = 0;
    for (int i = 0; i < size; i++) {
        char guess;
        do {
            cout << "**************************************\n";
            cout << questions[i] << '\n';
            for (int j = 0; j < 4; j++) {
                cout << options[i][j] << "\n";
            }
            cout << "\nChoice (A/B/C/D): ";
            cin >> guess;
        } while (guess != 'A' && guess != 'B' && guess != 'C' && guess != 'D');
        
        if (guess == answerKey[i]) {
            score ++;
            cout << "Correct!\n";
        } else {
            cout << "Incorrect!\nThe correct answer is " << answerKey[i];
        }

    }

    cout << "**************************************\n";
    cout << "Your score is " << score << "/" << size;
    cout << " or " << (score/(double)size)*100 << "%" << endl;
    return 0;
}