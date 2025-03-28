// print fibonacci sequence using recursion 
#include<iostream>
using namespace std;
void fibo(int a, int b, int n){
	// base case
	if(a>n)  return;
	cout<<a<<" ";
	fibo(b, a+b, n);
	

	
	
}
int main(){
	fibo(0, 1, 5);
}