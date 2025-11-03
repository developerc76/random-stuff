#include <iostream>

using namespace std;

int main() {

    double temp;
    char unit;

    cout << "***** Temperature Conversion ***** \n";
    cout << "F = Fahrenheit\n" << "C = Celsuis\n";
    cout << "What unit unit would you like to convert to (C/F): ";
    cin >> unit;

    if (unit == 'F' || unit == 'f') {
        cout << "Temperature (Celsius): ";
        cin >> temp;
        temp = (1.8*temp) + 32;
        cout << "Fahrenheit: "  << temp << " degrees \n";
    }else if (unit == 'C' || unit == 'c') {
        cout << "Temperature (Fahrenheit): ";
        cin >> temp;
        temp = (temp-32) /1.8;
        cout << "Celsuis: "  << temp << " degrees \n";
    } else {
        cout << "Enter a valid unit after restarting the program";
    }


    return 0;
}