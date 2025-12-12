#include <cstdlib>
#include <iostream>

#include "string.h"

int string::max_size_ = 100;

char* string::data() {
	return data_;
}

string::string() {
	size_ = 12;
	data_ = new char [size_];
		for (int i = 0 ; i < size_ ; i++) {
			data_[i] = "Hello world!"[i];
		}
	capacity_ = 0;
}

string::length() {
	length_ = new int [size_];
		for (int i = 0 ; i < size_ ; i++) {
			length_[i] = size_;
		}
	return length_;
}
