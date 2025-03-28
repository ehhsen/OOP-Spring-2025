// print nth fibonacci term from fibo sequence
#include<iostream>
using namespace std;
int fib(int n){
	if(n == 0 || n == 1){
		return n;
	}
	return fib(n-1) + fib(n-2);
}
int main(){
	cout<<" fibonacci "<<fib(5);
	return 0;
}