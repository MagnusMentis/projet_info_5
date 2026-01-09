#include <cstdlib>
#include <iostream>
#include <cstring> 

#include "string.h"

int string::max_size_ = 100;

char* string::data() const {
	return data_;
}

int string::length() const {
	return size_;
}

int string::size() const {
	return size_;
}

int string::max_size() const {
	return max_size_; 
}


void string::resize(int n) {
	int s = size_;
	size_ = n;
		capacity_ = n + 1;
		data_[capacity_] = '\0'; //ajout du caractere de fin
		if (n > s) {
			for (int i = s+1; i < n; i++) {
				data_[i] = '\0'; //remplir avec des '\0' si la nouvelle taille est plus grande
			}
		}

}	

void string::resize(int n, char c) {
	int s= size_;
	size_ = n;
		capacity_ = n + 1;
		data_[capacity_] = '\0'; //ajout du caractere de fin
		if (n > s) {
			for (int i = s+1; i < n; i++) {
				data_[i] = c; //remplir avec des c si la nouvelle taille est plus grande
			}
		}

}


string::~string(){  //destructor
} 

int string::capacity() const {
	return capacity_;
}


char* string::c_str() const {
	return data_; //simply returns data which is already a const char* type with null-character
}

bool string::empty() const noexcept{
	if (size_==0){
		return true;}
	else { return false;}
}

void string::reserve(int n){ //si parametre n>capacity, on remplace la valeur de capacity par n
	if (n<=capacity_){
		}
	else {
		char* copie= new char[n];
		for (int i=0; i<size_; i++){
			copie[i]=data_[i];
		}
		delete[] data_;
		data_=copie;
		capacity_=n;
		}
}


string& string::operator=(const char* s){ // remplace le string existant par un autre element
	delete[] data_; 
	int taille=0;
	while (s[taille]!='\0'){
		taille=taille+1;}
	size_=taille;
	capacity_=taille+1; 
	data_=new char[capacity_];
	for (int i=0; i<taille; i++){
			data_[i]=s[i];}
	return *this;
}

string operator+ (const string& A, const string& B) {
	int taille_A=A.size();
	int taille_B=B.size();
	char* fusion=new char[taille_A+taille_B+1];
	string resultat;
	delete[]resultat.data_;
	resultat.data_=fusion;
	resultat.size_=taille_A+taille_B;
	resultat.capacity_=taille_A+taille_B+1; 
	for (int i=0; i<taille_A; i++){
		resultat.data_[i]=A.data_[i];}
	for (int j=0; j<taille_B; j++){
		resultat.data_[taille_A+j]=B.data_[j];}
	return resultat;
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



	
//strlen
//strcpy
//memset
//memcpy
