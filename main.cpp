#include <cstdlib>
#include <iostream>

#include "string.h"

int main() {
	string A;
	char* A_data = A.data();
	std::cout << A_data << std::endl;
	return EXIT_SUCCESS;
}
