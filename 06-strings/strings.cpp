#include <iostream>
#include <string>
using namespace std;

int main() {
    string greetings = "Hello, ";
    // concatenation
    string first_name = "John";
    string last_name = "Doe";
    string full_name = first_name + " " + last_name;
    cout << greetings << full_name;
    return 0;

}