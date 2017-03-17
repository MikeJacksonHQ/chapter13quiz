#include "Integers.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

//*************************************************
//Class Functions/Implementation
//*************************************************

//*************************************************
// Integers::Integers() Default Constructor

Integers::Integers() {
	for (int count = 0; count < 5; count++) {
		userArray[count] = 0;
	}
}

//*************************************************
// Integers::Integers() Default Destructor

Integers::~Integers() {
}

//*************************************************
// Integers::setUserEntry()

void Integers::setUserEntry() {
	for (int intCount = 0; intCount < 5; intCount++) {
		string userInput;

		std::cout << "Enter interger " << (intCount + 1) << endl;
		getline(cin, userInput);
		Integers::validate(userInput);
	}
}

//*************************************************
// Integers::validate()

void Integers::validate(string userInput) {
	bool flag = false;
	static int arrayCount = 0;

	do {
		int valCounter = 0;

		if (!userInput.empty()) {
			for (unsigned int strCount = 0; strCount < userInput.length(); strCount++) {
				if (strCount == 0) {
					if (userInput.at(0) == '-') {
						valCounter++;
						continue;
					}
				}
				if (isdigit(userInput.at(strCount))) {
					valCounter++;
					if (userInput.length() == valCounter) {
						userArray[arrayCount] = stoi(userInput);
						arrayCount++;
						flag = true;
					}
				}
			}
		}
		if (!flag) {
			valCounter = 0;

			cout << "Incorrect input. Please enter an integer ";
			getline(cin, userInput);
		}
	} while (!flag);
	if (arrayCount == 5) { arrayCount = 0; }
}

//*************************************************
// Integers::displayIntegers()

const void Integers::displayIntegers() {
	std::cout << "The intergers in the array are" << endl;
	for (int intCount = 0; intCount < 5; intCount++) {
		std::cout << userArray[intCount] << endl;
	}
}

//*************************************************
// Integers::getLargestSmallestIntegers()

void Integers::getLargestSmallestIntegers() {
	int smallestInt = userArray[0];
	int largestInt = userArray[0];

	for (int intCount = 0; intCount < 5; intCount++) {
		if (userArray[intCount] < smallestInt) {
			smallestInt = userArray[intCount];
		}
		if (userArray[intCount] > largestInt) {
			largestInt = userArray[intCount];
		}
	}
	std::cout << "The smallest integer is " << smallestInt;
	std::cout << " and the largest integer is " << largestInt << endl;
}