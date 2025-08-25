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

    // one struct, multiple variables
    struct {
        int age;
        string name;
    } user_1, user_2, user_3;
    return 0;
}