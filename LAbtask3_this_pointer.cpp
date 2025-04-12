// 11/04/25 09:51
/*Task 3: Using this Pointer
Design a C++ class Score to manage a game score.
• Data Member: int points (public for simplicity).
• Requirements:
1. Parameterized constructor: Takes an integer parameter points
and uses the this pointer to initialize points (non-negative).
2. Member function: addPoints(int points) to add to the existing
points using this (ensure non-negative).
3. Constant member function: printScore() to display points.
• Question: Implement the class and test it by creating an object,
adding points using addPoints, and displaying the result with printScore().
Explain how this is used.*/
#include<iostream>
#include<string>
using namespace std;
class Score{
	public:
		int points;
	Score(int p){
		this->points = p;		
	}
	int addPoints(int Points){
		this->points += Points;	
		return this->points;	
	}
	void Print() const {
		cout<<"\nCurrent Points "<<points;
	}
};
int main(){
	Score s1(2);
	s1.Print();
//	Score s2;
	s1.addPoints(30);
	s1.Print();
}