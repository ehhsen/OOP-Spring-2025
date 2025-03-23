// program to read number of characters from a file
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main(){
	char ch;
	int count = 0;
	ifstream file("count_char.txt");
	if(!file){
		cout<<"File can't be opened";
		return 1;
	}
	else{
		while(!file.eof())
		{
			file.get(ch);
			count++;		
		}
		cout<<"\nNumber of characters in file are "<<count;	
		file.close();	
	}
	return 0;
}