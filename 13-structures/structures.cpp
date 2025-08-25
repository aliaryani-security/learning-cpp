#include <iostream>
#include <string>
using namespace std;

// named structs
// if you give an struct a name, 
// you can treat it like a data type
struct car {
    string brand;
    string model;
    int year;
};

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

    // moved named struct outside main()
    
    car my_car;
    my_car.brand = "BMW";
    my_car.model = "X5";
    my_car.year = 1999;

    cout << my_car.brand << " " << my_car.model << " " << my_car.year << endl;

    return 0;
}