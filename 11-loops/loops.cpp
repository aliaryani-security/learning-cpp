#include <iostream>
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
	
	return 0;
}