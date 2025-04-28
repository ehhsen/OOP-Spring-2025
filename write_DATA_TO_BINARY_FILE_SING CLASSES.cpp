// cret a class with three members , creat a getter function getdata() private.
//now creata public functon that calls the geta dat func and writes data o file
//int main , call 2nd function.

#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class student{
	private:
		char name[50];
		int age;
		int year;
		// getter function
		void get_data(){
			cout<<"\nIn get function";
			cout<<"\nEnter name: ";
			cin.getline(name, 50);
			cout<<"\nEnter age: ";
			cin>>age;
			cin.ignore();
			cout<<"\nEnter graduaion year: ";
			cin>>year;
			
		}
	public:
		void add(){
			cout<<"\nIn add function";
			ofstream file("Students_data.dat", ios::app);
			student s1;
			s1.get_data();
			// write data
			file.write( (char*)&s1 , sizeof(s1));
			file.close();
		}
		void display(){
			student s1;
			cout<<"\nDisplaying data:";
			ifstream file("sudents_data.dat", ios::in);
			while (file.read( (char*)&s1, sizeof(s1)))  
			{
				cout<<"while true";
				cout<<"\nname  "<<s1.name<<" age "<<s1.age<<" year "<<s1.year<<endl;
			}
			cout<<"end;";
			file.close();
		}
};
int main(){
	// creat object and call 
	char choice ;
	student s;
	do{
	s.add();
	cout<<"\nWant to more add?";
	cin>>choice;
	cin.ignore();	
	}while(choice =='y' || choice  == 'Y');
	s.display();
	return 0;	
}
