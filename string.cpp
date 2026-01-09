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

int string::capacity() {
	return capacity_;
}

string::string() {
	size_ = 0; //character "\0" doesn't count
	capacity_ = 1; //capacity_ >= size_
	data_ = new char [capacity_]; //account for a null-character
	memset(data_, 0, capacity_); //memset to create an empty space in memory
}

string::string(const char* text) {
	size_ = strlen(text);
	capacity_ = size_ + 1; //strlen doesn't count the null-character
	data_ = new char [capacity_];
	memcpy(data_,text,capacity_); //memcpy copies capacity_ bytes where text points
}

//strlen
//strcpy
//memset
//memcpy
