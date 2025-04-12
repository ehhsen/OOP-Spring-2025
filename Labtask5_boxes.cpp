// lab task 5 started at 11/04/25 11:47 
/*
Task 5
Design a C++ class Box to represent a box’s dimensions in length and width
(in inches).
• Data Members: int length, int width (private), static int totalBoxes.
• Requirements:
1. Default constructor: Sets length and width to 10.
2. Parameterized constructor: Takes length and width parameters
and uses this pointer to initialize (non-negative).
3. Copy constructor: Copies another Box object.
4. Static function: printTotalBoxes() to display totalBoxes.
5. Constant member function: showArea() to print the area (length
* width).
• Question: Implement the class and test it by creating objects using
all constructors, displaying their areas with showArea(), and showing
the total number of boxes with printTotalBoxes().
*/
#include<iostream>
#include<string>
using namespace std;
class box{
	int length, width;
	public:
	static int totalboxes;
	// default constructor
	box(){
		length = 10, width = 10;
		totalboxes++;
	}
	// parameterized constructor
	box(int l, int w){
		this->length = l;
		this->width = w;
		totalboxes++;
	}
	//copy constructor
	box( box &b){
		length = b.length;
		width = b.width;
		totalboxes++;
	}	
	// static function
	static void printTotalBoxes(){
		cout<<"\nTotal Boxex: "<<totalboxes;
	}
	void showArea() const {
		cout<<"\nArea: "<<this->length*this->width;
	}
};
// defining static variable
int box::totalboxes = 0;

// start of main  function
int main(){
	// creating objects
	box b1;
	b1.showArea();
	b1.printTotalBoxes();
	cout<<"\n-----------------\n";
	box b2(5, 4);
	b2.showArea();
	b2.printTotalBoxes();
	cout<<"\n-----------------\n";
	box b3(b2);
	b3.showArea();
	b3.printTotalBoxes();
	cout<<"\n-----------------\n";
	return 0;
}