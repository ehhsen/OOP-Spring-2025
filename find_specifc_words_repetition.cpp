// find how many times a specific word occurs in a file
//count words
// count number of alpphabets in a file using isalpha() func
#include<iostream>
#include<fstream>
//#include<string>
//#include<conio.h>
using namespace std;
int main(){
	char word[50], find[50];
	int count = 0;
	ifstream file("count_alphabets.txt");
	if(!file){
		cout<<"File can not be opened";
	}
	else{
		cout<<"\nEnter word you want to search in file ";
		cin>>find;
		while(!file.eof()){
			file>>word;
//			cout<<word;
			if(!strcmp(word, find))
				count++;
		}
		cout<<"\n The word "<<find<<" is repeated "<<count<<" times in the file.";
		file.close();
	}
	return 0;
}