/* lab task virtual - friend function and operator overloading
Q1. Abstract Class and Pure Virtual Function
Define an abstract class Shape that contains a pure virtual function double area().
Then, implement two classes Circle and Rectangle that inherit from Shape. Each class
should override the area() function and return the correct result.
• For Circle, accept radius and calculate area using the formula pi r 2
• For Rectangle, accept length and width and calculate area.
• Create objects of both types in main() and display the computed areas*/

#include<iostream>
using namespace std;
class Shape{
	public:
	// virtual function
	virtual double area() = 0;
};
class Circle: public Shape{
	double radius;
	public:
	// constructor
	Circle(double r){
		radius = r;
	}
	// area ovrloaded function
	double area() {
		return 3.14*radius*radius;
	}
};
class Rectangle: public Shape{
	int length, width;

	public:
	// constructor
	Rectangle(int l, int w){
		length = l; width = w;
	}	
	// overloaded area function
	double area() {
		return length*width;
	}
};
// driver code
int main(){
	Circle C(3.1);
	Rectangle R(10, 10);
	cout<<"Area of Circle = "<<C.area();
	cout<<"\nArea of rectangle = "<<R.area();
	return 0;	
}
