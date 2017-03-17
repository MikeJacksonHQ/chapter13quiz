#pragma once
#ifndef INTEGERS_H
#define	INTEGERS_H

#include <string>

//*************************************************
// Class Declarations
//*************************************************

class Integers {

private:

	int userArray[5];
public:

	Integers();
	~Integers();
	void setUserEntry();
	void validate(std::string);
	const void displayIntegers();
	void getLargestSmallestIntegers();
};

#endif // !INTEGERS_H
