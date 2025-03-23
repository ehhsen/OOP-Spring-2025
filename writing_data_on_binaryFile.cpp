// practising write function on binary file
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;
class student{
	int reg_num;
	int semester;
	string name;
	void getdata(){
		cout<<"\nEnter name: ";
		cin>>name;
		cout<<"\nEnter Semester: ";
		cin>>semester;
		cout<<"\nEnter Registration number: ";
		cin>>reg_num;
	}
	public:
		void AddRecord(){
			fstream file;
			student stu;
			file.open("student_data.dat", ios::app | ios::binary);
			stu.getdata();
			file.write( (char*)&stu, sizeof(stu));
			file.close();
		}
		
};
int main(){
	student s;
	char ch;
	do{
		s.AddRecord();
		cout<<"\nWanna Add more records [y/n] ";
		ch = getche();
				
	}while(ch == 'y' || ch == 'Y');
	cout<<"\nData wrtten to file succcessfully ";
	return 0;
}
