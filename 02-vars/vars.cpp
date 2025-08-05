#include <iostream>
using namespace std;

int main ()
{
    //integer
    int my_number {23};
    // floating-point numbers
    double my_double {22.33};
    // characters
    char my_char = 'a';
    //strings
    string my_str = "Hello";
    bool my_bool = true;
    // let's try it!
    if (my_bool) {
        cout << my_bool << "\n" << my_char << "\n" << my_double
        << "\n" << my_number << "\n" << my_str << "\n";
    }

    // declare multiple vars :
    int x = 5, y = 7, z = 8;
    cout << x + y + z;
    // see also:
    int a, b, c;
    a = b = c = 5;
    cout << a * b * c;

    // constants
    // used when you don't want a var to be changable
    const int const_num = 17;
    // const_num = 18; //let's see what happens 😂
    //! vars.cpp: In function ‘int main()’:
    //! vars.cpp:32:15: error: assignment of read-only variable ‘const_num’
    //! 32 |     const_num = 18; //let's see what happens 😂
    //!    |     ~~~~~~~~~~^~~~
    //also, you MUST assign a value to a constant


    return 0; 
}