#include <iostream>
#include <string>
using namespace std;

int main () {
    // a reference variable is an alias for an 
    // existing variable. it's created using
    // the & operator :
    string food = "Pizza";
    string &meal = food;

    cout << food << " " << meal << endl;

    // since they both refer to 
    // the same memory location,
    // changing one will change the other
    meal = "Doner Kebab";
    cout << food << " " << meal << endl;

    // the & can also be used get
    // the memory address of a variable
    cout << &food << endl;

    return 0;
}