#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main(){
	string line;
	ifstream file("students.txt");
	if(!file){
		cout<<"File can't be opened";
		return 1;
	}
	else{
		while(getline(file, line))
		{
			cout<<line<<endl;
		}
		file.close();		
	}
	return 0;
}