//opening file for writing
#include<iostream>
#include<iomanip>
#include<fstream>
//#include<string>
using namespace std;
int main(){
	// creates a new file and thenwrites data onto it
	ofstream file("dataaaa1.txt");
	file<<"this is first line wriiten ";
	file<<"\nSecond one";
	cout<<"data written to data1.txt ";
	file.close();
	return 0;
}