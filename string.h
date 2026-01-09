class string {
	public :

		
		
		char* data() const;
		char* c_str() const ;
		
		int capacity() const;
		int length() const;
		int max_size() const;
		int size() const;
		
		bool empty() const noexcept;
		
		void clear();
		void reserve (int n);
		void resize(int n);
		void resize(int n, char c);
		
		string();
		string(const char* text);
		string(const string& str);
		
		~string (); //destructeur
		
		string& operator= (char s);
		string& operator= (const char* s);
		string& operator= (const string& s);
		
		friend string operator+ (const string& A, char c);
		friend string operator+ (const string& A, const char* B);
		friend string operator+ (const string& A, const string& B);

	protected :
		char* data_;
		int capacity_;
		int size_;
		static int max_size_;
};


