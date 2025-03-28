// calculate factorial of number 4! = 4*3*2*1 for n>0
#include<iostream>
using namespace std; 
int factorial(int num){
	// base case  and corner case 
	if(num == 0){
		return 1;
	}
	if(num == 1){
		return 1;
	}
	else
		return num * factorial((num-1));
}
int main(void){
	cout<<"factorial "<<factorial(8);
}