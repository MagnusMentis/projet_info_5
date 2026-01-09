#include <cstdlib>
#include <iostream>
#include <cstring>

#include "string.h"

int main() {

	std::cout << "Test default constructor" << std::endl;
	string A;
	std::cout << A.data() << std::endl;
	std::cout << "La taille est de: " << A.size() << std::endl;

	std::cout << "Test constructor from char" << std::endl;
	string B("Hello world!");
	std::cout << B.data() << std::endl;
	std::cout << "La taille est de: " << B.size() << std::endl;
	

//================================================================
//Student A
//================================================================


	std::cout << "Test copy constructor" << std::endl;
	string C(B);
	std::cout << C.data() << std::endl;
	std::cout << "La taille est de: " << C.size() << std::endl;

//================================================================
//Student B
//================================================================

	std::cout << "Test length" << std::endl;
	string D("Bonjour!");
	std::cout << D.data() << std::endl;
	std::cout << "La taille est de: " << D.length() << std::endl;

	std::cout << "Test max size" << std::endl;
	std::cout << "La taille maximale est de: " << D.max_size() << std::endl;

//================================================================
//Student C
//================================================================



	return EXIT_SUCCESS;
}
