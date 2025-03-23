// read and write
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;
int main(){
	char data[100];
	// opening file inn write mode
	ofstream wfile("file.dat");
	cout<<"\nwriting to file ";
	cout<<"\nEnter name: ";
	cin.getline(data, 100);
//	getline(wfile, data);
	cout<<"\nEnter your age: ";
	cin.ignore();
//	getline(wfile, data);
	cin.getline(data, 100);
	wfile.close();
	
	// open file in read mode
	ifstream rfile("file.dat");
	cout<<"\nReading data from the file"<<endl;
	// displaying on screen
	rfile>>data;
	cout<<data<<endl;
	rfile>>data;
	cout<<data<<endl;
	rfile.close();
	return 0;
	
	}
	
	
	
