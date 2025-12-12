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

string::string() {
	size_ = 12;
	data_ = new char [size_];
		for (int i = 0 ; i < size_ ; i++) {
			data_[i] = "Hello world!"[i];
		}
	capacity_ = 0;
}

