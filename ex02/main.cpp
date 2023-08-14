#include <iostream>
#include <string>

int main( void ) {
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "'string' address is: " << &string << std::endl;
	std::cout << "'stringPTR' address is: " << stringPTR << std::endl;
	std::cout << "'stringREF' address is: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "'string' value is: " << string << std::endl;
	std::cout << "'stringPTR' value is: " << *stringPTR << std::endl;
	std::cout << "'stringREF' value is: " << stringREF << std::endl;
}
