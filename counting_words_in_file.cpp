// program to count number of lines
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
int main(){
	int count = 0;
	string str;
	ifstream file("count_lines.txt");
	if(!file){
		cout<<"\nCan't open file";
		return 1;
	}
	else{
		while(!file.eof()){
		getline(file, str);
		count++;
		}
		cout<<"\nNumber of lines in file are "<<count;
	file.close();
	return 0;


}}