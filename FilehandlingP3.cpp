#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
int main(){
	string name, age, disc;
	ifstream file("students.txt");
	if(!file){
		cout<<"File can't be opened ";
		return 1;
	}
	else{
		while(!file.eof()){
			file>>name>>disc>>age;
			cout<<left<<setw(10)<<name<<setw(15)<<disc<<setw(5)<<age<<endl;
		}
		file.close();
	}
}