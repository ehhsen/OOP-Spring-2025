// constructors - default
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class box{
	public:
		double height;
		double width;
		double length;
	public:
		box(){
			height = 12.0;
			length = 44.2;
			width = 432.1;		
		}
};
int main(){
	box b1;
	double v;
		// find volume
	v = b1.height* b1.length * b1.width;
	cout<<"\nVolume box1 = "<<v;
	return 0;
}