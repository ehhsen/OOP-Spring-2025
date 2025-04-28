// divide and conquer approach for recursion
#include<iostream>
#include<cmath>
using namespace std;
int po(int x, int y){
	if(y == 0)
	return 1;
	
	else if(y%2==0){
//		cout<<"\neven";
		// even case
		return po( x, y/2) * po(x , y/2);
	}
	
	else if(y%2!=0){
		//odd
//		cout<<"\nodd";
		return x*po(x, y-1);
	}
}

int main(){
	cout<<"\n "<<po(5,0);
	cout<<"\n "<<po(2,4);
	cout<<"\n "<<po(3,2);

	return 0;
	
}
