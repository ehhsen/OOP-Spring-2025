#include<iostream>
using namespace std;
// recursive factorial function
int factorial(int num)
{
	// base condition
	if(num == 0)
		return 1;
	
	return num * factorial(num-1);
}
int main(){
	cout<<"Factorial  "<<factorial(5);
	return 0;
}