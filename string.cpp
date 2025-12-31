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

void string::reserve(int n){
	if (n<=capacity_){
		}
	else {
		char* copie= new char[n];
		for (int i=0; i<size_; i++){
			copie[i]=data_[i];
		}
		delete[] data_;//les [] permettent de liberer tous le tableau et non pas que le premier element
		data_=copie;
		capacity_=n;
		}
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
