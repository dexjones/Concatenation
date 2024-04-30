/*Author: Dexter Jones

- Program that takes two string inputs from a user
- Concatenate strings
- Print resulting output from user 3 times for varying string lengths
*/
#include <iostream>

using namespace std;

int main() {
	
	string s1, s2, concatString;

	for (int i = 0; i < 3; i++) { // for loop to iterate 3 times for user input of 2 strings

		if (i == 0) { // first iteration to ask for two strings
			cout << "Please enter a city: ";
			cin >> s1; // user enters string 1 (city)

			cout << endl << "Enter the state or territory of city: ";
			cin >> s2; // user inputs string 2 (state)
		}

		else { // used for all other iterations to read more realistically
			cout << "Please enter another city: ";
			cin >> s1;

			cout << endl << "Enter another state or territory: ";
			cin >> s2;
		}

		concatString = s1 + s2; // creates new variable for concatenated strings

		cout << "The city and state concatenated: " << concatString << endl;
	}
	return 0;
}