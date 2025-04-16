// inheritance dog_animal
#include<iostream>
#include<iomanip>
using namespace std;
class animal{
	public:
		int legs;
	animal(){
		legs = 2;
	}
};
class dog: public animal {
	public:
		int tail;
	dog(){
		tail = 1;
	}
};
int main(){
	dog d1;
	cout<<"\nDefault legs: "<<d1.legs;
	cout<<"\nDefault tails: "<<d1.tail;
	return 0;
}