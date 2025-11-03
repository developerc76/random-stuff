#include <iostream>
#include <iomanip>

using namespace std;

//banking practice program

void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main() {
    
    double balance = 0;
    int choice = 0;

    do {
        cout << "******************\n";
        cout << "Enter your choice: \n";
        cout << "******************\n";
        cout << "1. Show Balance \n2. Deposit Money \n";
        cout << "3. Withdraw Money \n4. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                showBalance(balance);
                break;
            case 2: 
                balance += deposit();
                break;
            case 3: 
                balance -= withdraw(balance);
                break;
            case 4: 
                cout << "Thank you for visiting!\n";
                break;
            default: 
                cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance) {
    cout << "Your balance is $" << setprecision(2) << fixed << balance << '\n';
}

double deposit() {
    double money;
    do {
        cout << "How much money would you like to deposit? $";
        cin >> money;
    } while (money < 0);
    return money;
}

double withdraw(double balance) {
    double withdrawalAmount;
    do {
        cout << "How much money would you like to withdraw? $";
        cin >> withdrawalAmount;
    } while (withdrawalAmount > balance);
    return withdrawalAmount;
}