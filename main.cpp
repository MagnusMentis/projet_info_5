#include <cstdlib>
#include <iostream>
#include <cstring>

#include "string.h"

int main() {

	std::cout << "Test default constructor" << std::endl;
	string A;
	std::cout << A.data() << std::endl;
	std::cout << "La taille est de: " << A.size() << std::endl; //we use .size() a lot for testing but we test this function in student A test to respect the order

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
	
	std::cout << "Test c_str" << std::endl;
	std::cout << C.c_str() << std::endl;
	
	std::cout << "Test size" << std::endl;
	std::cout << "La taille est de: " << C.size() << std::endl;
	
	std::cout << "Test clear" << std::endl;
	C.clear();
	std::cout << C.data() << std::endl;
	
//================================================================
//Student B
//================================================================

	std::cout << "Test length" << std::endl;
	string D("Bonjour!");
	std::cout << D.data() << std::endl;
	std::cout << "La taille est de: " << D.length() << std::endl;

	std::cout << "Test max size" << std::endl;
	std::cout << "La taille maximale est de: " << D.max_size() << std::endl;

	std::cout << "Test resize" << std::endl;
	D.resize(5);
	std::cout << D.data() << std::endl;
	std::cout << "La taille est de: " << D.size() << std::endl;

	std::cout << "Test resize with specified charater" << std::endl;
	D.resize(10,'a');
	std::cout << D.data() << std::endl;
	std::cout << "La taille est de: " << D.size() << std::endl;

//================================================================
//Student C
//================================================================


	std::cout << "Test reserve" << std::endl;	
	std::cout << "Change t'on la capacité par n?: " << "capacité avant: "<< B.capacity() << std::endl;
	B.reserve(10); //c'est une fonction de type void on ne peut donc pas la print
	std::cout << "capacité après: " << B.capacity() << std::endl;
	std::string str1, str2, str3;
  	str1 = "Test égal: ";  
  	str2 = "Test réussi ;)";   
  	std::cout << str1  << str2<< std::endl;
  	std::string str4, str5;
  	str3 = "Test +: ";  
  	str4 = "Mais où trouve t'il ";
  	str5 = "toute cette énergie";
  	std::cout << str3  << str4+str5<< std::endl;


	return EXIT_SUCCESS;
}
