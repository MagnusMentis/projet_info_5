class string {
	public :

		char* data() const;
		int size() const;
		int max_size() const;
		int capacity() const;
		int length() const;
		bool empty() const noexcept;
		void reserve (int n);
		char* c_str() const ;
		string();
		string(const char* text);
		string(const string& str);
		~string (); //destructeur
		string& operator= (const char* s);
		void resize(int n);
		void resize(int n, char c);
		
	protected :
		char* data_;
		int size_;
		static int max_size_;
		int capacity_;
};
