#include <cstdlib>
#include <iostream>
#include <cstring> 

#include "string.h"

int string::max_size_ = 100; //set max size to 100

char* string::data() const {
	return data_;
}

char* string::c_str() const {
	return data_; //simply returns data which is already a const char* type with null-character
}

int string::capacity() const {
	return capacity_;  //gives the capacity of the string
}

int string::length() const {
	return size_; // length of characters in the string
}


int string::max_size() const {
	return max_size_; // returns the maximum size allowed for the string
}

int string::size() const {
	return size_; //size of the string
}

bool string::empty() const noexcept{
	if (size_==0){ //if the size is 0, the string is empty
		return true;}
	else { return false;}
}

void string::clear() {
	size_ = 0; // set size to 0
	capacity_ = 1;
	data_ = new char [capacity_];
	memset(data_,0,capacity_);
}

void string::reserve(int n){ //compare capacity whith the string n, if the capacity is smaller we create a new array with the size n
	if (n<=capacity_){
		}
	else {
		char* copie = new char[n];
		for (int i=0; i<size_; i++){
			copie[i] = data_[i];
		}
		delete[] data_;
		data_ = copie;
		capacity_ = n;
		}
}

void string::resize(int n) { //change the size of the string to n
	int s = size_; //saves the current size
	size_ = n;
		capacity_ = n + 1;
		data_[capacity_] = '\0'; //join the null-character
		if (n > s) {
			for (int i = s+1; i < n; i++) {
				data_[i] = '\0'; //complete with null-characters if the new size is bigger
			}
		}

}	

void string::resize(int n, char c) { //change the size of the string to n and complete with character c
	if (n <= max_size_){//check if n is smaller than max_size
	int s= size_;
	size_ = n;
		capacity_ = n + 1;
		data_[capacity_] = '\0'; //join the null-character
		if (n > s) {
			for (int i = s+1; i < n; i++) {
				data_[i] = c; //complete with character c if the new size is bigger
			}
		}
	}
	else {
		std::cout << "Dépassement de la taille maximale autorisée" << std::endl; //error message if n is bigger than max_size
	}
	
}


string::string() {
	size_ = 0; //character "\0" doesn't count
	capacity_ = 1; //capacity_ >= size_ + 1
	data_ = new char [capacity_]; //account for a null-character
	memset(data_, 0, capacity_); //memset to create an empty space in memory
}

string::string(const char* text) {
	size_ = strlen(text);
	capacity_ = size_ + 1; //strlen doesn't count the null-character
	data_ = new char [capacity_];
	memcpy(data_,text+0,capacity_); //memcpy copies capacity_ bytes where text points
}

string::string(const string& str) { //str is of class string so we can use the functions above
	size_ = str.size();
	capacity_ = str.capacity();
	data_ = new char [capacity_];
	memcpy(data_,str.data_,capacity_); //using capacity to copy the null-character
}

string::~string(){
	delete[] data_;  //destructor
} 


string& string::operator=(const char* s){ // remplace le string existant par un autre element
	delete[] data_; 
	size_ = strlen(s);
	capacity_ = size_+1; 
	data_ = new char[capacity_];
	for (int i=0; i<size_; i++){
			data_[i] = s[i];}
	return *this;
}


string operator+ (const string& A, const string& B) { //concatène 2 strings 
	int taille_A = A.size();
	int taille_B = B.size();
	char* fusion = new char[taille_A+taille_B+1];
	string resultat;
	delete[]resultat.data_;
	resultat.data_ = fusion;
	resultat.size_ = taille_A+taille_B;
	resultat.capacity_ = taille_A+taille_B+1; 
	for (int i=0; i<taille_A; i++){
		resultat.data_[i] = A.data_[i];}
	for (int j=0; j<taille_B; j++){
		resultat.data_[taille_A+j] = B.data_[j];}
	return resultat;
}	
	
