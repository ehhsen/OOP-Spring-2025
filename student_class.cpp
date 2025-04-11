//class simple example
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student{
	string name;
	int rollnum;
	public:
		void getdata(){
			cout<<"\nEnter name: ";
			getline(cin, name);
			cout<<"\nEnter roll  number: ";
			cin>>rollnum;
		}
		void print(){
			cout<<"\nName: "<<name;
			cout<<"\nRoll Number: "<<rollnum;
		}
};
int main(){
	student s;
	s.getdata();
	s.print();
	return 0;
}