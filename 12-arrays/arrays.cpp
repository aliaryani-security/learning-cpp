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
    // add element to vector:
    names.push_back("Ronald");

    // size of array
    int my_numbers[5] {10, 20, 30, 40, 50};
    cout << sizeof(my_numbers) << endl;
    // it returned 20. But why ?!
    // because sizeof() returns the size in bytes
    // to find out how many elements an array has, 
    // we will divide the size of array by the size of the first element :
    cout << sizeof(my_numbers) / sizeof(my_numbers[0]) << endl;
    // this can be used for looping :
    for (int i = 0; i < sizeof(my_numbers)/sizeof(my_numbers[0]); i++) {
        cout << my_numbers[i] << endl;
    }

    return 0;
}