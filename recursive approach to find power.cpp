// recursive power

#include<iostream>
#include<iomanip>
using namespace std;
int power(int num, int pow)
{
	if(pow == 0)
		return 1;
	else
		return num * power(num, pow-1);
}


int main()
{
	// recursive function to find factorial
	cout<<"2 raised to power 4 : "<<power(2,4);
	
}