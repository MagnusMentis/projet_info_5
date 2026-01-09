#include <cstdlib>
#include <iostream>
#include <cstring> 

#include "string.h"

int string::max_size_ = 100;

char* string::data() {
	return data_;
}

int string::length() {
	return size_;
}

int string::size() {
	return size_;
}

int string::max_size() {
	return max_size_;
}

// Student C

string::~string(){  //destructor
} 

int string::capacity() {
	return capacity_;
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
	
	
	
	

string::string() {
	size_ = 0;
	data_ = new char [size_ + 1];
	memcpy(data_,"",size_);
	capacity_ = 0;
}

string::string(const char* text) {
	size_ = strlen(text);
	data_ = new char [size_ + 1];
	memcpy(data_,text,size_);
	capacity_ = 0;
}



	
//strlen
//strcpy
//memset
//memcpy
