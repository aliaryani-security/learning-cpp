#include <iostream>
// #include <string>
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

    // change values
    // to change the default values
    // do this :
    enum scores {
        FIRST = 100
        , SECOND = 50
        , THIRD = 25
    };
    enum scores my_score = FIRST;
    cout << my_score << endl;
    // note that if you assign a value
    // to only one of the items,
    // the others will change accordingly
    enum change_one {
        THREE = 3
        , FOUR
        , FIVE
    };
    enum change_one item = FOUR;
    cout << item << endl; // 4

    // using enum in switch
    enum level my_level {HIGH};
    switch (my_level) {
        case LOW:
            cout << "Low Level" << endl;
            break;
        case MEDIUM:
            cout << "Medium Level" << endl;
            break;
        case HIGH:
            cout << "High Level" << endl;
            break;
    }

    //* final words:
    //* use enums when you have values that will not
    //* change, like cards, days, months, etc.
    return 0;
}