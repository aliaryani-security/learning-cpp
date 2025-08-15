#include <iostream>
#include <string>
using namespace std;

int main () {
	// if
	if ( 5 > 3) {
		cout << "it was greater" << endl;
	}
	// if else
	if (17 < 20){
		cout << "it was smaller" << endl;
	} else {
		cout << "it was bigger" << endl;
	}
	
	// short hand if else
	// this is also known as ternary
	// this is used for simple conditions
	//syntax :
	// var = (condition) ? expression_true : expression_false;
	int time {20};
	string result = (time < 18) ? "Good day!" : "Good evening!";
	cout << result << endl;
	
	// example 1
	int door_code {1337};
	if (door_code == 1337) {
		cout << "Correct" << endl;
	} else {
		cout << "Incorrect" << endl;
	}
	// example 2
	int my_num {10};
	if (my_num > 0) {
		cout << "Positive number" << endl;
	} else if (my_num < 0) {
		cout << "Negative number" << endl;
	} else {
		cout << "The number is zero" << endl;
	}
	
	
	return 0;
}