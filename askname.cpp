#include <stdio.h>
#include <string.h>

void askFirstName() {
	std::string firstName;
	std::cout << "Enter your first name: ";
	std::cin >> firstName;
	return firstName;
}

void askLastName() {
	std::string lastName;
	std::cout << "Enter your last name: ";
	std::cin >> lastName;
	return lastName;
}
