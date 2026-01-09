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
	

//================================================================
//Student A
//================================================================




	return EXIT_SUCCESS;
}
