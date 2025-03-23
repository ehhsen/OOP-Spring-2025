// open a file and append data to the end of file
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
int main(){
	string line;
	ofstream file("dataaa1.txt", ios::out | ios::app);
	if(file.fail()){
		cout<<"\nError occured while opening file";
	}
	else{
		cout<<"\nEnter name: ";
		getline(cin, line);
		file<<line<<endl;
		
		cout<<"\nEnter Registration number ";
		getline(cin, line);
		file<<line<<endl;
		
		cout<<"\nEnter Age ";
		getline(cin, line);
		file<<line<<endl;
		cout<<"\nData Written";		
}
return 0;		
}