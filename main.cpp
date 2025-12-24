#include <cstdlib>
#include <iostream>
#include <cstring>

#include "string.h"

int main() {
	string A;
	std::cout << A.data() << std::endl;

	std::cout << "La taille est de: " << A.length() << std::endl;	

	string B("Hello world!");
	std::cout << B.data() << std::endl;

	std::cout << "La taille est de: " << B.length() << std::endl;
	
	std::cout << "La liste est vide?: " << B.empty() << std::endl;


	return EXIT_SUCCESS;
}
