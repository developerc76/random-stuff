#include <iostream>
using namespace std;

int main() {

    // char - 1 btye
    // must be enclosed in single quotes
    char x = 'A'; 
    cout << "char x = " << x << "\n";

    // string - array of chars
    // double quotes
    char c[] = "Hello, World!";
    cout << "char[] c = " << c << "\n";

    // integer - 4 bytes
    // range: -2,147,483,648 to 2,147,483,648
    int y = 2;
    printf("int y = %d \n", x);

    //boolean - 1 btye
    //outputs as 0 or 1 in cpp
    bool z = true;
    printf("bool z = %b \n", z);

    //float -  4 bytes
    //range: 1.2E-38 to 3.4e+38
    float a = 0.93;
    cout << "float a = ";
    cout << a << '\n';

    //double - 8 bytes
    //range: 1.7e-308 to 1.7e+308
    double b = 3.1415926535;
    cout << "double b = ";
    cout << b << '\n';

    //constant - cannot be reassigned
    //var name has to be all caps
    const double PI = 3.1415926535;
    cout << "const double PI = " << PI << "\n";

    std::string name;
    int age;
    std::cout << "What's your full name? ";
    std::getline(std::cin, name);
    std::cout << "How old are you? ";
    std::cin >> age;
    std::cout << "Hello, " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';
    return 0;

    return 0;
}