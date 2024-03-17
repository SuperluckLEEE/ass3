#include <iostream>
#include "Reverser.h"
#include <string>


int main(){
	Reverser rs;
	int num;
	std::cin>>num;
	std::cout<<rs.reverseDigit(num)<<std::endl;
	
	std::string word;
	std::cin>>word;
	std::cout<<rs.reverseString(word)<<std::endl;


}
