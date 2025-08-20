#include <iostream>
using namespace std;

int main () {
    // arrays can store multiple values in a single variable
    // syntax for arrays : type var_name[number_of_elements]
    string cars[4] {"Volvo", "BMW", "Benz", "Mazda"};
    // accessing elements of an array :
    cout << cars[2] << endl;
    return 0;
}