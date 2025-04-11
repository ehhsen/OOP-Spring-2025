// defining methods outside class
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Rating{
	private: 
	string name;
	int age;
	int rank;
	public:
		void getdata();
		void print();

};
void Rating::getdata(){	
		cout<<"\nEnter name: ";
		getline(cin, name);
		cout<<"\nEnter age: ";
		cin>>age;
		cout<<"\nEnter rank: ";
		cin>>rank;						
}
void Rating::print(){
	cout<<"\nName: "<<name;
	cout<<"\nAge: "<<age;
	cout<<"\nRank: "<<rank;
}
int main(){
	Rating e1;
	e1.getdata();
	e1.print();
	return 0;
	
}