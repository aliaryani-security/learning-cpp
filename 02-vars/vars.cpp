#include <iostream>
using namespace std;

int main ()
{
    //integer
    int my_number {23};
    // floating-point numbers
    double my_double {22.33};
    // characters
    char my_char = 'a';
    //strings
    string my_str = "Hello";
    bool my_bool = true;
    // let's try it!
    if (my_bool) {
        cout << my_bool << "\n" << my_char << "\n" << my_double
        << "\n" << my_number << "\n" << my_str;
    }
}