//C++ Program, which Initializes a String Variable and
//Outputs the String to the Disk File
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main(){
	char st[300] =  "My name is Ahan Ali Nisar, I'm 19 yo ";
	ofstream file("string.txt");
	if(!file){
		cout<<"\nFile creation failed";
		return 1;
	}
	else{
		// writing string
		file<<st;
		cout<<"\ndata written";
	}
}