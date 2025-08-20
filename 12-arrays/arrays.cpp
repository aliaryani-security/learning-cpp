#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {
    // arrays can store multiple values in a single variable
    // syntax for arrays : type var_name[number_of_elements]
    string cars[4] {"Volvo", "BMW", "Benz", "Mazda"};
    // accessing elements of an array :
    cout << cars[2] << endl;

    // changing array value:
    cars[0] = "Maybach";
    cout << cars[0] << endl;

    // looping in an array:
    for (int i = 0; i < 4; i++) {
        cout << cars[i] << endl;
    }
    // or we can use foreach which is designed for this purpose
    for (string car : cars) {
        cout << car << endl;
    }

    // you can also remove the array size number, the compiler
    // can determine it for you. but do not do that, okay ?!

    // an array size is fixed. you cannot add or remove elements after decleration
    // if that needs to be done, we will use vectors:
    // include <vectors> library and begin
    vector<string> names {"Liam", "John", "Alex", "Joseph"};

    return 0;
}