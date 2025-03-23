// program to count number of words
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main(){
	int count = 0;
	char word[30];
	ifstream file("count_words.txt");
	if(!file){
		cout<<"\nCan't open file";
		return 1;
	}
	else{
		while(!file.eof()){
			file>>word;
			count++;
		}
		cout<<"\nTotal Words are "<<count;
		file.close();
	}
	return 0;
}