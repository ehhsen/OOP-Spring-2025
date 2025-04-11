#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class box{
	public:
		double height;
		double width;
		double length;
};
int main(){
	box b1, b2;
	double volume1, volume2;
	// initializing
	b1.height = 12.0;
	b1.length = 44.2;
	b1.width = 432.1;
	
	b2.height = 1.0;
	b2.length = 4.2;
	b2.width = 32.1;
	
	// find volume
	volume1 = b1.height* b1.length * b1.width;
	cout<<"\nVolume box1 = "<<volume1;
	volume2 = b2.height* b2.length * b2.width;
	cout<<"\nVolume box2 = "<<volume2;
	return 0;	
	
}