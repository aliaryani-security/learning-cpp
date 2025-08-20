#include <iostream>
#include <string>
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

    return 0;
}