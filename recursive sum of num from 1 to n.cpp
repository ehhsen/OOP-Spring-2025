// sum of n numbers with recursion
#include<iostream>
using namespace std;
int sum(int n){
	if(n==1)
		return 1;
	return n + sum(n-1);
}
int main(){
	cout<<"Sum "<<sum(100);
	return 0;
}