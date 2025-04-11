//class simple example
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class employee{
	private: 
	string name;
	int age;
	int rank;
	public:
	void getdata(){
		cout<<"\nEnter name: ";
		getline(cin, name);
		cout<<"\nEnter age: ";
		cin>>age;
		cout<<"\nEnter rank: ";
		cin>>rank;				
		}
};
int main(){
	employee e1;
	e1.getdata();
	return 0;
	
}