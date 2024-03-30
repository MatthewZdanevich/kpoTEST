#include <iostream>
#include <string>
#include "askname.h"

int main() {
	std::cout << "Hello, Git!" << std::endl;
	
	std::string name = askFirstName();
	std::string lastName = askLastName();
	std::cout << "Hello, " << name << " " << lastName << " !" << std::endl;
	
	return 0;
}
