#include <cstdlib>
#include <iostream>

#include "string.h"

int main() {
	string A;
	std::cout << A.data() << std::endl;
	
	string B("Hello world!");
	std::cout << B.data() << std::endl;
	return EXIT_SUCCESS;
}
