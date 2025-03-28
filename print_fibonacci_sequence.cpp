//.  print fibonacci numbers upto n
#include<iostream>
using namespace std;
void fibo(int num){
	int a = 0, b =1, c;
	if(num>=0) cout<<a<<" ";
	if(num>=1) cout<<b<<" ";
	
	for (c= a+b; c<=num ; c = a+b){
		cout<<c<<" ";
		a= b;
		b = c;
	}
}
int main(){
	fibo(1);
}