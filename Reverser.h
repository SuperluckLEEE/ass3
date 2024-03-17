#ifndef REVERSER_H
#define REVERSER_H
#include <string>

class Reverser{
public:
	int reverseDigit(int value);
	std::string reverseString(std::string characters);
private:
	int reverseDigit(int lastDigit, int reverseNum);

};
#endif
