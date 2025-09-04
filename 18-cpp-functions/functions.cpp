#include <iostream>
using namespace std

; void my_function () { // decelaration
    cout << "I just got executed!" << endl // defenition
; }
/*
    if a function is declared after the main(),
    you will get an error. howvever for better 
    optimization, we can declare the function 
    up here, and define it down there !
*/
void second_function()

; int main () {
    my_function()
    // a function can be called multiple times
    ; my_function()
    ; my_function()
    ; second_function()
    ; return 0
; }

// here we go :
void second_function() {
    cout << "second function"
; }