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

    return 0;
}