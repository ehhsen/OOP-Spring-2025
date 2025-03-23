// example of read function
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;
class student{
	int reg_num;
	int semester;
	char name[50];
	void putdata(){
		cout<<"\n"<<left<<setw(10)<<name<<setw(10)<<reg_num<<setw(6)<<semester<<endl;
	}
	public:
		void display(){
			fstream file("students_data.dat, ios::in | ios::binary");
			student stu;
			cout<<"\n"<<left<<setw(10)<<"name"<<setw(10)<<"reg_num"<<setw(6)<<"semester"<<endl;
//			while((file.read((char*)&stu, sizeof(stu))) != NULL)
			file.read((char*)&stu, sizeof(stu));
				cout<<"\n"<<left<<setw(10)<<name<<setw(10)<<reg_num<<setw(6)<<semester<<endl; 
				stu.putdata();
			file.close();
		}
};
int main(){
	student s;
	s.display();
	return 0;////////////////////////////////not working
}	