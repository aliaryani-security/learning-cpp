#include <iostream>
#include <string>
using namespace std;

int main () {
    // enum is a special type that 
    // represents a group of constants (unchangable values)
    // it's considered a best practice to
    // write items with upper case
    enum level {
        LOW
        , MEDIUM
        , HIGH
    };

    // access enum
    // to access it, create a var from it.
    enum level my_var = MEDIUM;
    cout << my_var << endl; // returns 1.
    // by default, LOW = 0, MEDIUM = 1, HIGH = 2


    return 0;
}