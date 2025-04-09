// count number of alpphabets in a file using isalpha() func
#include<iostream>
#include<fstream>
//#include<string>
//#include<conio.h>
using namespace std;
int main(){
	char ch;
	int count;
	ifstream file("count_alphabets.txt");
	if(!file){
		cout<<"File can not be  opened";
	}
	else{
		while(!file.eof()){
			file.get(ch);
			cout<<ch;
			if(isalpha(ch))
				count++;
		}
		cout<<"\nNumber of alphabets in file: "<<count;
		file.close();
	}
	return 0;
}