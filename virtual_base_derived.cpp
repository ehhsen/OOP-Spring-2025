#include<iostream>
using namespace std;
class base{
	public:
		virtual void show(){
			cout<<"\nIn base class";
		}
};
class derived: public base{
	public:
		virtual void show(){
			cout<<"\nIn derived class";
		}
};
int main(void){
	base *bp = new derived;
	bp->show();
	return 0;
}
