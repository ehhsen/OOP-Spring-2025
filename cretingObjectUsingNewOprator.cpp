#include<iostream>
using namespace std;
class army{
	public:
		void display(){\
		cout<<"\nPakistan Zindabad ";
		}
};
int main(){
	army *a = new army();
	(*a).display();
	a->display();
	
}
