#include <iostream>
#include <string>

using namespace std;

int main () {
	// while loop
	int i {0};
	while (i < 10) {
		cout << i << endl;
		++i;
	}
	
	// do while
	// the block of code will be
	// executed once before checking
	// the condition
	int j {0};
	do {
		cout << j << endl;
		++j;
	} while (j < 10);

	// for loop
	// for has three statements:
	// 1: is executed once before the block starts being run
	// 2: condition for executing the code block
	// 3: is executed every time that code block is executed
	for (int i = 0; i < 10; ++i) {
		cout << i << endl;
	}

	// nested loops:
	// you can create a loop inside a loop
	for (int i = 0; i < 10; ++i) {
		for (int j = 10; j > 0; --j) {
			cout << i * j << endl; //weird code, I know. but it shows how things work!
		}
	}

	// foreach loop:
	// used to loop through the elements of an array
	// (or any data structure)
	int my_numbers[5] = {10,20,30,40,50};
	for (int i: my_numbers) {
		cout << i << endl;
	}
	// can also be used for a string:
	string str = "Hello World";
	for (char c: str) {
		cout << c << endl;
	}
	return 0;
}