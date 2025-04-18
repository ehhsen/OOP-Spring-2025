// lab task inheritance 18/04/25 11:07
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
class shape{
	public: 
	int length;
	int width;
	
	shape(): length(4), width( 2){
	}
	virtual int displayDetails(){
		cout<<"\nIn display virtual func's base class body ";
		return 0;
	}
};
class rectangle: public shape{
	public:
		int x1;
		int x2;
		int y1;
		int y2;
	int area(){
		return length * width;
	}
	int parameter(){
		return 2*length  + 2*width;
	}
	
	rectangle(): x1(4), x2(2), y1(8), y2(4){
	}	
	
	double distance(){		
		return sqrt( pow(x2-x1, 2) + pow(y2-y1, 2)  ) ;
	}
	
	int displayDetails(){
		cout<<"\n-----------------------";
		cout<<"\nArea: "<<area();\
		cout<<"\nParameter: "<<parameter();
		cout<<"\nDistance: "<<distance();
		cout<<"\n-----------------------";
		return 0;
	}	
};
int main(){

	
	rectangle r;
	r.displayDetails();
}