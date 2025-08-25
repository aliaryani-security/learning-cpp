#include <iostream>
#include <string>
using namespace std;

int main () {
    struct {
        int my_number;
        string my_string;
    } my_structure; // structure name

    // assign values :
    my_structure.my_number = 10;
    my_structure.my_string = "Hello";

    // accessing values
    cout << my_structure.my_number << endl;
    cout << my_structure.my_string << endl;
    return 0;
}