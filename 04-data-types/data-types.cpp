#include <iostream>
#include <string> //it's better be included for string type
using namespace std;

int main () {
    int my_num {12}; // integer
    float my_float {2.56}; // floating point number sufficient for 6-7 digits
    double my_double {7777.23}; // floating point number sufficient for 15 digits
    char my_letter = 'B';
    bool my_boolean = true;
    string my_text = "C++ ist wunderbar!";
    cout << my_num << my_float << my_double << my_letter << my_boolean << my_text << endl;
    
    // when assigning a value, you can use auto to ask the compiler the type for you:
    auto x {73.4};
    cout << x;
    
    return 0;
}