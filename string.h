class string {
	public :

		
		
		char* data() const;
		char* c_str() const ;
		int capacity() const;
		int length() const;
		int max_size() const;
		int size() const;
		bool empty() const noexcept;
		void reserve (int n);
		void resize(int n);
		void resize(int n, char c);
		
		string();
		string(const char* text);
		string(const string& str);
		~string (); //destructeur
		string& operator= (const char* s);
		friend string operator+ (const string& A, const string& B);
		

		
	protected :
		char* data_;
		int size_;
		static int max_size_;
		int capacity_;
};


