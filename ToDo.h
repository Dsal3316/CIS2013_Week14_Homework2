#include <iostream>
#include <string>
using namespace std;

class ToDo {
	private:
	
		string *list;
		int length = 0;
		int next = 0;
		
	public:
	
		ToDo();
		
		ToDo(int len);
		
		~ToDo();
		
		void add(string item);
		
		void done();
		
		void print();
		
};