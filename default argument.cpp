#include <iostream>
#include <cmath>
#include <conio.h>
#include<iomanip>
using namespace std;
 
void area(float length = 3,float breadth  );  //function prototype
void area(float length,float breadth  )
{
	float area;
	cout<<"\n area of rectangle="<<length*breadth;
	cout<<"\nlength = "<<length;
	cout<<"\nwidth = "<<breadth;
	
}

int main() {						
	int num1,num2;
	area(40.3);
	area(3);
	area(5);
	area(3,4);
	
   return 0;
}


