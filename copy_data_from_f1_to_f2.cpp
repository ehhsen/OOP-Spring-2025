// program to copy contents of one file to another
// open 1 in read and other in write mode
// read file 1's data and paste << data from to another
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ifstream fileread("read_data.txt");
	ofstream filewrite("write_data.txt");
	char ch;
	while(!fileread.eof()){
		fileread.get(ch);
		filewrite<<ch;
	}
	cout<<"\nData copied successfully";
	fileread.close();
	filewrite.close();
	return 0;
}