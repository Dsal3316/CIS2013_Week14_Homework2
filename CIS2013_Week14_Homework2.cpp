#include <iostream>
#include <fstream>
#include <string>
#include "ToDo.h"

using namespace std;

int main(){
	char next = 'y';
	int len=0;
	string action;
	
	cout<< "How long do you want you list: ";
	cin>> len;
	
	ToDo list(len);
	
	//ToDo manylist[10];
	
	while(next != 'x'){
		
		cout<< "Add to list(a)" << endl;
		cout<< "Done list item (d)" << endl;
		cout<< "Print list (p)" << endl;
		cout<< "Exit list app (x)" << endl;
		cout<< "What do you want to do: ";
		cin>>next;
		cin.ignore();
		cout<<endl;
		
		switch(next){
			case 'a':
				cout<< "Name a todo item: ";
				getline(cin,action, '\n');
				list.add(action);
				break;
			case 'd':
			{
				cout<<"List item number to delete: ";
				int n;
				cin.ignore();
				list.done();
				break;
			case 'p':
				list.print();
				break;
			case 'x':
				break;
		}
	}
}