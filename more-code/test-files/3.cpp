#include <iostream>

//typedef creates an alias for a data type
//conventionally has _t at the end of the new keyword

typedef std::string text_t;
using integer = int;


#include <iostream>

using namespace std;

int main() {
    
    //explicit
    cout << "This is explicit type conversion: ";
    int x = 100;
    //100 is an ASCII value for 'd'
    cout << (char) x << '\n';

    //implicit
    cout << "This is implicit type conversion: ";
    int y = 4.01;
    cout << y << '\n';


    //getting a percent using type conversion
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
    cout << "Score: " << score << "%" << '\n';

    text_t msg = "Hello World!";
    std::cout << "text_t msg = " << msg << '\n';

    integer i = 2;
    std::cout << "integer i = " << i << '\n';

    return 0;
}