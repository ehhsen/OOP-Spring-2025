// divide and conquer approach for recursion
#include<iostream>
#include<cmath>
using namespace std;
int power(int x, int y){
	if(y == 0)
	return 1;
	
	else if(y%2==0){
		cout<<"\neven";
		// even case
		return power( pow(x,y/2) , 2 );
	}
	
	else if(y%2!=0){
		//odd
		cout<<"\nodd";
		return x*power(x, y-1);
	}
}

int main(){
	cout<<"\n "<<power(5,0);
	cout<<"\n "<<power(2,4);
	cout<<"\n "<<power(3,3);

	return 0;
	
}
