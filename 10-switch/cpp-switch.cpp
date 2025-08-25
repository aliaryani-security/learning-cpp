#include <iostream>
using namespace std;

int main () {
	// switch is to execute one matching block
	int day {4};
	switch (day) {
		case 1:
		    cout << "Saturday" << endl;
		    break;
		case 2:
		    cout << "Sunday" << endl;
		    break;
		case 3:
		    cout << "Monday" << endl;
		    break;
		case 4:
		    cout << "Tuesday" << endl;
		    break;
		case 5:
		    cout << "Wednesday" << endl;
		    break;
		case 6:
		    cout << "Thursday" << endl;
		    break;
		case 7:
		    cout << "Friday" << endl;
		    break;
		default: // will execute if none of the above happens
		    cout << "You got out of the matrix!";
	}
	
	return 0;
	
}