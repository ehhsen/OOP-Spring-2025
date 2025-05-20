// binary operator overloading using friend functon
#include<iostream>
using namespace std;
class Distance {
	private:
		int inch;
		int feet;
	public:
		// default constructor
		Distance(){
			this->inch = 0;
			this->feet = 0;
		}
		
		// parameterized constructor
		Distance(int i, int f){
			this->feet = f;
			this->inch = i;
		}
		// declaring friend function 
		friend Distance operator -(Distance , Distance );
		
		// display function
		void display (){
			cout<<"\n objet has "<<this->feet<<" feets and "<<this->inch<<" inches ";		
		}		
};

Distance operator -(Distance d1, Distance d2){
	Distance d3;
	d3.feet = d1.feet - d2.feet;
	d3.inch = d1.inch - d2.inch;
	return d3;
}

int main(){
	Distance d1(4, 2);
	Distance d2(2, 1);
	Distance d3;
	d3 = d1 - d2;
	d1.display();
	d2.display();
	d3.display();
	return 0;
}
