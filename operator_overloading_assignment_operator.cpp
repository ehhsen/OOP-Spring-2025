#include<iostream>
using namespace std;
class complex{
	private:
		int real;
		int imj;
	public:
		complex(int r, int i){
			real = r;
			imj  = i;
		}
		void operator = (const complex& c){
			real = c.real;
			imj = c.imj;
		}	
		void print (){
			cout<<"\n "<<real<<" "<<imj<<"j"<<endl;
		}
};
int main(){
	complex c1(2, 4), c2(4, 1);
	cout<<"\nBefore operator overloading "<<endl;
	cout<<"\nObject 1";
	c1.print();
	cout<<"\nObject 2";
	c2.print();	
	// ovrloading
	c1 = c2;
	cout<<"\n after operator loading";
	cout<<"\nObject 1";
	c1.print();
	cout<<"\nObject 2";
	c2.print();		
}
