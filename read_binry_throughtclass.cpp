// read binary file
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class student{
	private:
		char name[50];
		int age;
		int year;
		void putdata(){
			cout<<name<<age<<year<<endl;
		}
	public:
		void display(){
			ifstream file("students_data.dat", ios::in| ios ::binary);
			student s1;
			cout<<"name \t age \t graduation year"<<endl;
			while( file.read((char*)&s1, sizeof(s1) ) )
			{	
			s1.putdata();
			}
			file.close();
			}
};
int main(){
	student s1;
	s1.display();
	return 0;
}
