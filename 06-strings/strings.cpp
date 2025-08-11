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

    // append
    string first = "Ali ";
    string last = "Aryani";
    string full = first.append(last);
    cout << "\n" << full;

    // length
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "the length of this string is: " << alphabet.length() << endl;
    // you can also use alphabet.size() and it will do the same thing for you.

    // access strings
    string my_hello = "Hello";
    cout << my_hello[0] << endl;
    // or to print the last character of the string
    cout << my_hello[my_hello.length() - 1] << endl;
    // see also:
    my_hello[0] = 'J';
    cout << my_hello << endl;

    // string input:
    // we can use cin, but it will take only the first word entered
    // if you type John Doe, you will only get John from cin !
    // so we will use getline() instead:
    string username;
    cout << "Enter your username: ";
    getline(cin, username);
    cout << "You are: " << username << endl;
    return 0;

}