#include <iostream>
using namespace std;

int main () {
	bool happiness {true};
	bool sadness {false};
	cout << happiness << "\n" << sadness << endl;
	// 1 is true and 0 is false
	
	// real world example
	int my_age {24};
	int voting_age {18};
	
	if (my_age >= voting_age) {
		    cout << "Old enough to vote!" << endl;
		} else {
			cout << "Not old enough to vote" << endl;
		}
	
	return 0;
}