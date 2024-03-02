#include <iostream>
#include <string>

int main() {
	std::cout << "Hello Git!" << std::endl;
	
	std::string name;
	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "Hello " << name << " !";
	
	std::string lastName;
	std::cout << "Enter your lastname: ";
	std::cin >> lastName;
	std::cout << "Hello, " << name << " " << lastName << " !" << std::endl;
	
	return 0;
}
