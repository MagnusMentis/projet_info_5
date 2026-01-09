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
	
	std::cout << "Change t'on la capacité par n?: " << "capacité avant: "<< B.capacity() << std::endl;
	B.reserve(10); //c'est une fonction de type void on ne peut donc pas la print
	std::cout << "capacité après: " << B.capacity() << std::endl;
	std::string str1, str2, str3;
  	str1 = "Test string: ";  
  	str2 = "Test réussi ;)";   
  	std::cout << str1  << str2<< std::endl;

	return EXIT_SUCCESS;
}
