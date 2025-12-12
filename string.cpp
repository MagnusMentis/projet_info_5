#include <cstdlib>
#include <iostream>
#include <cstring> 
#include "string.h"

int string::max_size_ = 100;

char* string::data() {
	return data_;
}

string::string() {
	size_ = 12;
	data_ = new char [size_ + 1];
	strcpy(data_,"Hello world!");
	capacity_ = 0;
}
//strcpy
//memset
//memcpy
