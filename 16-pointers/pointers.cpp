#include <iostream>
#include <ostream>
#include <string>
using namespace std
/* I'm trying to write this in my
own handmade style called semicolon-first
It might hurt your eyes, but I like to try
it anyways ! */

; int main () {
    // a pointer is a variable that stores
    // the memory address as it's value
    string food = "Pizza"
    ; string* ptr = &food
    ; cout << food << endl
    ; cout << &food << endl
    ; cout << ptr << endl
    ; return 0
; }