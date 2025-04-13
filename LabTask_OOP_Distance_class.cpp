/* oop labtask 1 13/04/25 18:43
/ Lab Task 1: Distance Class
Objective: Create a C++ class Distance to represent a distance in terms of feet and
inches. The class should ensure that the distance is always positive and that inches are
less than 12 (since 12 inches equals 1 foot). Instead of getter/setter functions, include
simple functions to perform operations like converting the distance to total inches and
adding two distances.
Requirements:
1. Create a class Distance with two private data members:
	• An int feet to store the number of feet.
	• A double inches to store the number of inches.	
2. Ensure the following constraints:
	• The distance cannot be negative (feet and inches must be positive).	
	• There are 12 inches in a foot, so if inches are ≥ 12, convert the excess into
feet, ensuring inches are always less than 12.
3. Implement a utility member function simplify() to ensure the distance is positive
and inches are less than 12. Call this function in all member functions where feet
and inches are set or modified.
4. Write the following constructors:
	• A default constructor to initialize the distance to 0 feet and 0 inches.
	• A parameterized constructor to initialize the distance using given feet and inches.
	• A conversion constructor that takes a single double parameter representing a
distance in feet (e.g., 5.5 feet) and sets the feet and inches accordingly.

5. Provide the following member functions (instead of getters/setters):
	• toTotalInches():
	Returns the total distance in inches by converting feet to inches 
	and adding the inches (i.e., feet × 12 + inches).
		
	• addDistance(Distance other): 	
	Adds the given Distance object to the current object, 
	updates the current object’s feet and inches, and calls simplify()
	to normalize the result.
	
6. In a main() function, create three Distance objects:
	• One using the default constructor.
	• One using the parameterized constructor with the values 3 feet and 15 inches.
	• One using the conversion constructor with the value 4.5 feet.
	• For the first two objects, call toTotalInches() and print the result.
	
	• Add the second and third objects using addDistance() and print the updated
	distance of the second object in the format “X feet and Y inches” (you can
	directly access the data members in main() for printing if needed, or add a
	simple display function).
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
class Distance{
	int feet;
	double inches;
	public:
//	• A default constructor to initialize the distance to 0 feet and 0 inches.
	Distance(): feet(0), inches(0) {
	}
// 	• A parameterized constructor to initialize the distance using given feet and inches.
	Distance(int f, double i): 	feet(f), inches(i){
		simplify();	}
		
//	• A conversion constructor that takes a single double parameter representing a
//distance in feet (e.g., 5.5 feet) and sets the feet and inches accordingly.
	Distance(double dinfeet){
		feet = int(dinfeet);
		inches = (dinfeet - feet)*12;
		simplify();
	}	
	//methods 
	double toTotalInches(){
		simplify();
		return feet*12 + inches;
	}	
	
	void addDistance(Distance d){
		// add distance to previous one's feets and inches
		feet+= d.feet;
		inches+= d.inches; 	
		//call simplify 
		simplify();
	}	
	void simplify(){
		// this func simplifies feet and  inches of distance 
		// applying the constraints 
		// greater than 0		
		if (feet <= 0) feet = 0;
    	if (inches <= 0) inches = 0;	
			
		// now simplifying
		if (inches >= 12){
			int xtrafeet = int(inches)/12;
			feet += xtrafeet; 		 // updating feet		
			inches = fmod(inches,12);	// updating inches			
		}
	}
	void print(){
		cout<<"\n "<<feet<<" Feet "<<inches<<" Inches \n";
	}
	
};
int main(){

	Distance d1;
	cout<<"\nTotal inches: "<<d1.toTotalInches();
	d1.print();
	
	Distance d2(3,15);
	cout<<"\nTotal inches: "<<d2.toTotalInches();
	d2.print();
	
	Distance d3(4.5);
	d2.addDistance(d3);
	d2.print();
		
	return 0;
}



