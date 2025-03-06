// LAB TASK : fUNCTIONS IN C++
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



