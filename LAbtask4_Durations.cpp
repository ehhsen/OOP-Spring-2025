//11/04/25 10:28
/*Task 4:
Static Members with Simplification
Create a C++ class Duration to represent time in hours and minutes.
• Data Members: int hours, int minutes (private), static int
totalDurations (tracks total objects).
• Requirements:
1. Default constructor: Sets hours and minutes to 0.
2. Parameterized constructor: Takes hours and minutes, simplifies
minutes (e.g., 75 minutes becomes 1 hour, 15 minutes).
3. Private utility function: simplify() to keep minutes i 60 (called
in constructors).
4. Static function: showTotalDurations() to print totalDurations.
5. Constant member function: display() to print hours and minutes.
• Question: Implement the class and test it by creating multiple objects,
displaying their simplified durations with display(), and showing the
total number of objects using showTotalDurations().*/
#include<iostream>
#include<string>
using namespace std;
class Duration{
	private:
		int minutes;
	public:
		int hours;
		static int totalDurations;
		
		Duration(){
//			cout<<"\nIn default constructor";
		hours = 0, minutes = 0;
		totalDurations++;
		}
		Duration(int h, int m){
//		cout<<"\nIn parameterized constructor";		
		hours = h;
		minutes = m;
//		cout<<"\nHours : "<<hours;
//		cout<<"\nMinutes : "<<minutes;	
		// converting minutes;
		simplify(hours, minutes);
		// updating duration;
		totalDurations++;
	}
	private:
	void simplify(int h, int m) {
//		cout<<"\nIn simplify function";
			if(m>59){
				int l = m/60;
				hours = hours + l;
				int k = l*60;
				m = m - k;
				minutes = m;	
//				cout<<"\n hours "<<hours<<" \nminutes "<<minutes<<endl;		
			}
			else{
				cout<<"\nMinutes in required format";
			}
			}
	public:
		static void showTotalDuration(){
			cout<<"\ntotal Durations / number of times constructors are called: "<<Duration::totalDurations;		
		}
	void display() const{
		cout<<"\nHours: "<<hours<<"\tMinutes: "<<minutes;
	}
	
};
int Duration::totalDurations = 0;
int main(){
	Duration d1(0, 30);
	d1.display();
	d1.showTotalDuration();
	Duration d2(3, 60);
	d2.display();
	d2.showTotalDuration();
	Duration d3(4, 200);
	d3.display();
	d3.showTotalDuration();
	return 0;
	
}