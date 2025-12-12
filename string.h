class string {
	public :
		char* data();
		int size();
		int max_size();
		int capacity();
		int length();
		string();
		string(const char* text);
	protected :
		char* data_;
		int size_;
		static int max_size_;
		int capacity_;
};
