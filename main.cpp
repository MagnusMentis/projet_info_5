#include <cstdlib>
#include <iostream>
#include <cstring>

#include "string.h"

int main() {

	std::cout << "Test default constructor" << std::endl;
	string A;
	std::cout << A.data() << std::endl;
	std::cout << "La taille est de: " << A.length() << std::endl;

	std::cout << "Test constructor from char" << std::endl;
	string B("Hello world!");
	std::cout << B.data() << std::endl;
	std::cout << "La taille est de: " << B.length() << std::endl;
	

//================================================================
//Student A
//================================================================

	std::cout << "Test copy constructor" << std::endl;
	string C(B);
	std::cout << C.data() << std::endl;
	std::cout << "La taille est de: " << C.length() << std::endl;

//================================================================
//Student B
//================================================================

	
	
//================================================================
//Student C
//================================================================

	

	return EXIT_SUCCESS;
}
