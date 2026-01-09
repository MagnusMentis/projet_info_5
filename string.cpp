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

int string::capacity() const {
	return capacity_;
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
	memcpy(data_,text,capacity_); //memcpy copies capacity_ bytes where text points
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
