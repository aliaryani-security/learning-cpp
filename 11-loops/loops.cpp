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
	
	return 0;
}