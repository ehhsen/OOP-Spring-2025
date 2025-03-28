// sum of n numbers using recursion   5+4+3+2+1
#include<iostream>
using namespace std;
int sum(int num){
	if(num<1){
		cout<<"Enter number greater than ";
		return 1;
	}
	if(num == 1){
		return 1;
	}
	else{
		return num + sum(num-1);
	}
}
int main(){
	cout<<"sum: "<<sum(10);
}