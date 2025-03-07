// LAB TASK : fUNCTIONS IN C++
/*1 Lab Task 1: Function Overloading
Objective: Implement a program to demonstrate function overloading by creating multiple functions with the same name but different parameters.
Task:
• Create a C++ program with the following overloaded functions:
– A function calculate that takes two integers and returns their sum.
– A function calculate that takes three integers and returns their
product.
– A function calculate that takes two floating-point numbers and
returns their average.
• In the main function, call each of these functions with appropriate arguments and display the results.
• Ensure that the functions are correctly overloaded based on the number
and type of parameters.*/

#include<iostream>
#include<iomanip>
using namespace std;

int calculate(int, int);
int calculate(int, int, int);
float calculate(float, float);

int calculate(int num1, int num2)
{
	return num1+num2;
}

int calculate(int num1, int num2, int num3)
{
	return num1*num2 * num3;
}

float calculate(float n1, float n2)
{
	float a = (n1  + n2)/2;
	return a;
}

int main()
{
	cout<<"sum : "<<calculate(2,5);
	cout<<"\nproduct : "<<calculate(2,5, 3);
	float a = 1.0, b = 2.4;
	cout<<"\nproduct : "<<calculate(a, b);
	return 0;
	
}



