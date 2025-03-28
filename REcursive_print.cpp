// recursion practise shradha khapra .. 
// print all numbers from n to 1 where n >1
#include<iostream>
#include<iomanip>
using namespace std;
void print(int num){
	// base case
	if(num==0){
		return;
	}
	// recursive 
	cout<<num<<" ";
	print(--num);
}
int main(){
	print(100);
	return 0;
	
}