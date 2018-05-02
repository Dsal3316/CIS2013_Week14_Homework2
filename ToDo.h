#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;

class ToDo {
	private:
		string file_name= "ToDo.dat";
		string *list;
		int length = 0;
		int next = 0;
		string item;
		void file_read();
		void file_save();
	public:
	
		ToDo();
		
		ToDo(int len);
		
		~ToDo();
		
		void add(string item);
		
		void done();
		
		void done(int n);
		
		void print();
		
		int getlength();
		
};