#include "Reverser.h"
#include <string>

using namespace std;


int Reverser::reverseDigit(int value){
	if(value < 0){
		return -1;
	}
	return reverseDigit(value,0);

}

int Reverser::reverseDigit(int value, int reverserNum){
	if(value == 0){
		return reverserNum;
	}
	int lastDigit = value % 10;
	reverserNum = reverserNum * 10 + lastDigit;
	return reverseDigit(value / 10,reverserNum);
}

string Reverser::reverseString(string characters){
	//if(!characters){
	//	return "ERROR";
	//}

	if(characters.length() <= 1){
		return characters;
	}else{
		char lastChar = characters[characters.length()-1];
		string restr = characters.substr(0,characters.length()-1);
		return lastChar + reverseString(restr); 
	}
}
