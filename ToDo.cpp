#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include "ToDo.h"

using namespace std;

ToDo::ToDo(){
	//ToDo(5);
}

ToDo::ToDo(int len){
	length=len;
	list = new string[length];
	file_read();
}

ToDo::~ToDo(){
	file_save();
	delete []list;
}

void ToDo::file_save(){
	
	ofstream ofstr(file_name);
	if (!ofstr.fail()){
		for (int i=0; i<next; i++){
			ofstr << list[i] << endl;
		}
		ofstr.close();
	}
}

void ToDo::file_read(){
	ifstream ifstr(file_name);
	if (!ifstr.fail())
	{
		string s;
		while (getline(ifstr,s))
		{
			add(s);
		}
	}
}

void ToDo::add(string item){
	if(next<length){
		list[next]=item;
		next++;
		
	}
}

void ToDo::done(){
	next--;
	list[next]= "";
}

void ToDo::done(int n){
	if(n<=next)
	{
		for(int i=n; i<length-1;i++){
			list[i]=list[i+1];
		}
		next--;
	}
}

void ToDo::print(){
	for(int i=0; i<next; i++){
		cout<< " " << i << " " << list[i] << endl;
	}
}

int ToDo::getlength(){
	return length;
}