#include <iostream>
#include <iomanip>
#include <string>
#include "Integers.h"

using namespace std;

//*************************************************
// Main Initiation
//*************************************************

int main() {
	bool programContinue = true;

	std::cout << "In this program you will be prompted to enter five integers" << endl;
	system("PAUSE");
	std::cout << endl;

	while (programContinue) {
		string programCon = "";
		Integers *testPtr = new Integers();
		Integers test = *testPtr;

		test.setUserEntry();
		test.displayIntegers();
		test.getLargestSmallestIntegers();

		std::cout << "y/Y to retry, any other char to exit ";
		getline(cin, programCon);

		if (programCon == "y" || programCon == "Y") {
			std::cout << "\n";
			continue;
		}
		else {
			programContinue = false;
			std::cout << "bye bye";
		}
		delete testPtr;
	}
	return 0;
}
