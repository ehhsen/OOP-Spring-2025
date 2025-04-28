// recursion
#include<iostream>
using namespace std;
int factorial(int num){
	if(num<0)
		return 0;
	
	if(num == 0)
		return 1;
//	if(num!=0)
	else
		return num*factorial(num-1);
}
int main(){
	cout<<"\n  5  "<<factorial(5);
	cout<<"\n  -32  "<<factorial(-32);
	cout<<"\n  0  "<<factorial(0);
}
