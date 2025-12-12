#include <cstdlib>
#include <iostream>
#include <cstring>

#include "string.h"

int main() {
	string A;
	std::cout << A.data() << std::endl;


	std::cout << "La taille est de: " << A.length() << std::endl;

	return EXIT_SUCCESS;
}
