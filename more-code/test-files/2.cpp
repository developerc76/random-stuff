#include <iostream>
#include <cmath>
using namespace std;

void test() {
    double x = 3;
    double y = 4;
    double z = 2.2;
    double a = 0.9;

    std::cout << std::max(x, y) << '\n';
    std::cout << std::min(x, y) << '\n';
    std::cout << pow(2, 4) << '\n';
    std::cout << sqrt(9) << '\n';
    std::cout << abs(-3) << '\n';
    std::cout << round(z) << '\n' << ceil(a) << '\n';
    std::cout << floor(a) << '\n';
}

int pythagorean() {
    double a;
    double b; 
    std::cout << "Leg 1: ";
    std::cin >> a;
    std::cout << "Leg 2: ";
    std::cin >> b;
    double c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "Hypotenuse: " << c << '\n';
    return 0;
}

int main() {
    pythagorean();
    return 0;    
}