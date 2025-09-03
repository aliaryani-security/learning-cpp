#include <iostream>
// #include <string>
using namespace std

; int main () {
    /*
    memory management is the process of
    controlling how much memory your 
    program uses and how it is used.
    */
    // when you create a variable,
    // the compiler automatically 
    // reserves space in memory
    // for it.
    // you can check how much memory
    // a variable uses by using sizeof()
    int my_num
    ; float my_float
    ; double my_double
    ; char my_char
    ; cout << sizeof(my_num) << endl
    ; cout << sizeof(my_float) << endl
    ; cout << sizeof(my_double) << endl
    ; cout << sizeof(my_char) << endl
    /*
    
Do You Have to Manage Memory Yourself?

Sometimes yes - and sometimes no.

    For normal variables (like int x = 10;), C++ takes care of the memory for you.
    But when you want to create memory manually while the program is running (for example: based on user input), you need to manage it yourself and clean it up when you're done.

    If your program uses too much memory, or forgets to clean up memory it no longer needs, it can lead to slow performance or even crashes.

    That's why understanding memory is important. It gives you more control and helps avoid common bugs.
    */
    
    /*
    In C++, you can use pointers to access and change memory directly.

    This is powerful, but also risky. If you use a pointer the wrong way, you could accidentally change or damage other parts of your program's memory.
    */

    ; return 0
;}