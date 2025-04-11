// parameterized constructor
// initialized when objectbis created
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Rating{
	public: 
	string name;
	int age;
	int rank;
	
	Rating(string s, int a , int r= 29){
		name = s;
		age = a;
		rank = r;
	}
	void print();
};
void Rating::print(){
	cout<<"\nName: "<<name;
	cout<<"\nAge: "<<age;
	cout<<"\nRank: "<<rank;
}
int main(){
	Rating R("Ahsan Ali", 19, 200);
	R.print();
	return 0;
}