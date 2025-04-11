// ask user to enter file taht will be opened
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	char data[100], fileName[50];
	
	cout<<"\nEnter file name you want to open: ";
	cin.get(fileName, 50);
	//opening file
	ifstream file;
	file.open(fileName, ios::in );
	if(!file)
		cout<<"\nCan't open file ";
	else{
		file.get(data, 100);
		cout<<data;
		file.close();
	}
	return 0;
}