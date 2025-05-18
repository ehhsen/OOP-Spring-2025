#include<iostream>
using namespace std;
class student {
	private:
		int defence;
		int attack;
	public:
		student(int d, int a){
			defence = d;
			attack = a;
		}
		void operator = (student &s){
			defence = s.defence;
			attack = s.attack;
		}
	    void display(){
	    	cout<<"\n Marks \n defence = "<<defence<<" \n attack "<<attack<<endl;
	    	
		}
};

int main(){
	student s1(80, 91), s2(87, 58);
	cout<<"\n marks student 1";
	s1.display();
	cout<<"\n marks student 2";
	s2.display();
	// overload
	s1 = s2;
	// display again
	cout<<"\n fter overloading";
	cout<<"\n marks student 1";
	s1.display();
	cout<<"\n marks student 2";
	s2.display();	
	
	
}
