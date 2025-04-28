#include<iostream>
using namespace std;
int sum(int a= 0, int b = 2){
	return a+b;
}
int main(){
	cout<<sum(2);
	cout<<"\n-----\n";
	cout<<sum(5,2);
	cout<<"\n-----\n";
	cout<<sum();
	return 0;
}
