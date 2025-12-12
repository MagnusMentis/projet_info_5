class string {
	public :
		char* data();
		string();
	protected :
		char* data_;
		int size_;
		int max_size_;
		int capacity_;
};
