// constructor overloading
#include<iostream>
#include<iomanip>
using namespace std;
class area{
	int length, breadth;
	public:
		// consttructor with no argumets
		area(): length(10), breadth(10) {}
		// constructor with 2 arguments
		area(int l, int b): length(l), breadth(b) {}
		// member function
		int areaCalculation(){
		return length * breadth;
		} 
		// display
		void display(int A) {cout<<"\nArea: "<<A;
		}
		
};
int main(){
	area A1, A2(5, 4);
	int area  = A1.areaCalculation();
	A1.display(area);
	cout<<"\n----------------------\n";
	area = A2.areaCalculation();
	A2.display(area);
	
	
}