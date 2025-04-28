//alhamdulillah
#include<iostream>
using namespace std;
void sum(int a, int& b, int &c){
	c = a+b+1;
	b = b+2
	a = a+2;
	
}
int main(){
	int x= 4,y=3,z=5;
	sum(x,y,z);
	cout<<"\n"<<x<<" "<<y<<" "<<" "<<z;
	sum(y,x,z);
	cout<<"\n"<<x<<" "<<y<<" "<<" "<<z;
	sum(z,y,x);
	cout<<"\n"<<x<<" "<<y<<" "<<" "<<z;
	sum(z,z,x);
	cout<<"\n"<<x<<" "<<y<<" "<<" "<<z;
	return 0;
}
