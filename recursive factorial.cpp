// recursion
#include<iostream>
#include<iomanip>
using namespace std;
int fact(int num)
{
	if(num == 0)
		return 1;
	else
		return num * fact(num-1);
}
int main()
{
	// recursive function to find factorial
	cout<<"Factorial: "<<fact(8);
	
}