
/*
3 Lab Task 3: Function Template
Objective: Implement a program to demonstrate the use of function templates
for generic programming.
Task:
• Create a C++ program with a function template swapValues that takes
two arguments of any data type and swaps their values.
• In the main function, call the swapValues function with the following sets
of arguments:
– Two integers (e.g., 10 and 20).
– Two floating-point numbers (e.g., 3.14 and 2.71).
– Two characters (e.g., ’A’ and ’Z’).
• Display the values before and after swapping for each function call.*/


#include<iostream>
#include<iomanip>
using namespace std;
template <class T>
void swapValues(T &v1, T &v2)
{
	cout<<"\nValues before swap: "<<v1<<"\t"<<v2;
	T swap;
	swap = v1;
	 v1 = v2;
	 v2 = swap;
	cout<<"\nValues after swap: "<<v1<<"\t"<<v2<<endl;
}
int main()
{
	int a = 10, b = 20;
	cout<<"\nInteger: \t";
	swapValues(a, b);
	cout<<"\nfloat: \t";
	float v1 = 3.14, v2 = 2.71;
	swapValues(v1, v2);
	cout<<"\ncharacter: \t";
	char c1 = 'A', c2 = 'Z';
	swapValues(c1, c2);
	/* display values to check if the values are actually swapped
	cout<<"\nNew Values"<<endl;
	cout<<a<<"\t"<<b<<endl;
	cout<<v1<<"\t"<<v2<<endl;
	cout<<c1<<"\t"<<c2<<endl;
	*/
	return 0;	
}
