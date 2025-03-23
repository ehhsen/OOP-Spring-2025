#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;
int main(){
	// ofstream filename ("physicalfilename.txt");
	ifstream filename; string str;
	filename.open("data1.txt");
	if(!filename)
		cout<<"\nFile can not be opened"<<endl;
	else{
		while(!filename.eof()){
			filename>>str;
			cout<<str;
//			cout<<str<<" ";
		}
	}
	filename.close();	
}
