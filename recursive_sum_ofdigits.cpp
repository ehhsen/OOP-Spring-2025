// sum of digits
#include<iostream>
using namespace std;
int sum(int num){
	//base case
	if(num<10){
		return num;
	}
	else{
		return sum(num/10) + sum(num%10);
	}
}
int main(){
	cout<<"\n  "<<sum(123);
	cout<<"\n  "<<sum(45);
	cout<<"\n  "<<sum(0);
	
}
