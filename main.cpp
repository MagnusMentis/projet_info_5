#include <cstdlib>
#include <iostream>
#include <cstring>

#include "string.h"

int main() {

	std::cout << "Test default constructor" << std::endl;
	string A;
	std::cout << A.data() << std::endl;
	std::cout << "La taille est de: " << A.size() << std::endl; //we use .size() a lot for testing but we test this function in student A test to respect the order

	std::cout << "\nTest constructor from char" << std::endl;
	string B("Hello world!");
	std::cout << B.data() << std::endl;
	std::cout << "La taille est de: " << B.size() << std::endl;
	

//================================================================
//Student A
//================================================================


	std::cout << "\n Test copy constructor" << std::endl;
	string C(B);
	std::cout << C.data() << std::endl;
	std::cout << "La taille est de: " << C.size() << std::endl;
	
	std::cout << "\n Test c_str" << std::endl;
	std::cout << C.c_str() << std::endl;
	
	std::cout << "\n Test size" << std::endl;
	std::cout << "La taille est de: " << C.size() << std::endl;
	
	std::cout << "\n Test clear" << std::endl;
	C.clear();
	std::cout << C.data() << std::endl;
	
//================================================================
//Student B
//================================================================

	std::cout << "\n Test length" << std::endl;
	string D("Bonjour!");
	std::cout << D.data() << std::endl;
	std::cout << "La taille est de: " << D.length() << std::endl;

	std::cout << "\n Test max size" << std::endl;
	std::cout << "La taille maximale est de: " << D.max_size() << std::endl;

	std::cout << "\n Test resize" << std::endl;
	D.resize(5);
	std::cout << D.data() << std::endl;
	std::cout << "La taille est de: " << D.size() << std::endl;


	std::cout << "\n Test resize with specified charater" << std::endl;
	D.resize(15,'a');
	std::cout << D.data() << std::endl;
	std::cout << "La taille est de: " << D.size() << std::endl;

	std::cout << "\n Test resize with specified charater out of bounds (150)" << std::endl;
	D.resize(150,'a');
	std::cout << D.data() << std::endl;
	std::cout << "La taille est de: " << D.size() << std::endl;

	string string1("Salut a tous");
	char string2 = '!';
	string string3;

	std::cout << "Test operator + and = " << std::endl;
	std::cout << string1.data() << std::endl;
	std::cout << string2 << std::endl;

	string3 = string1 + string2;

	std::cout << string3.data() << std::endl;

//================================================================
//Student C
//================================================================


	std::cout << "\n Test reserve" << std::endl;	
	std::cout << "Change t'on la capacité par n?: " << "capacité avant: "<< B.capacity() << std::endl;
	B.reserve(10); //It's a void type function we cannot print it directly
	std::cout << "capacité après: " << B.capacity() << std::endl;
	std::string str1, str2, str3;
  	str1 = "\n Test égal (c-string): ";  
  	str2 = "Test réussi (c-string):";   
  	std::cout << str1  << str2<< std::endl;
  	std::string str4, str5;
  	str3 = "\n Test plus (c-string): ";  
  	str4 = "Mais où trouve t'il ";
  	str5 = "toute cette énergie ?\n";
  	std::cout << str3.data() << std::endl;
  	std::cout << str4.data() << std::endl;
  	std::cout << str5.data() << std::endl;
  	std::cout << str4+str5<< std::endl;


	return EXIT_SUCCESS;
}
