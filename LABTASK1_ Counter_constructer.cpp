// lab task 1 : 11/04/25 09:17
/*Task 1: Basic Class with Constructors
Design a C++ class Counter to represent a simple counter.
• Data Member: int count (non-negative, public for simplicity).
• Requirements:
1. Default constructor: Initializes count to 0.
2. Parameterized constructor: Takes an integer parameter to initial￾ize count (set to 0 if negative).
3. Constant member function: display() to print the value of count.
• Question: Implement the class and test it by creating two objects:
one with the default constructor and one with the parameterized constructor. Display their counts using display().*/

#include<iostream>
#include<string>
using namespace std;
class counter{
	public:
		int count;
	counter(){
		count = 0;
	}
	counter(int a){
		if(a<0)
			a = 0;
			count = a;
	}
	void display() const{
		cout<<"\nValue of count is: "<<count;
	}
};
int main(){
	counter c1;
	c1.display();
	counter c2(-1);
	c2.display();
	counter c3(32);
	c3.display();
	return 0;
}

