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
		void clear();
		string();
		string(const char* text);
		string(const string& str);
		~string (); //destructeur
		string& operator= (const char* s);
		friend string operator+ (const string& A, const string& B);
		void resize(int n);
		void resize(int n, char c);
		string& operator= (const string& s);
		string& operator+ (const string& s);

	protected :
		char* data_;
		int size_;
		static int max_size_;
		int capacity_;
};


