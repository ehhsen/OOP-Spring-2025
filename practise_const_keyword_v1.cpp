// parctise const 
#include<iostream>
using namespace std;
int main(){
/*	// pointer points to a const value
	// pointer can point to a different memory location but its value can be changed
	int value = 10;
	int another_value  = 5;
	const int*ptr = &value;
	cout<<"*ptr = &value  "<<*ptr;
	*ptr = 200; // wrong bcz value to which pointer poits is const
	ptr= &another_value;
	cout<<"\n*ptr = &a value  "<<*ptr;*/
	
	/////////////////////////////////
	
	//const pointer variable points to a value
	// value it points can change but cant points to a different memory locaton
//	int value = 10;
//	int another_value  = 5;
//	int* const ptr = &value;
//	cout<<"\n*ptr: "<<*ptr;
//	*ptr = 200;
//	cout<<"\n*ptr: "<<*ptr;
//	ptr = &another_value;

////////////////////////////
//	case3
//	const pointer to const value, neithr could be changed
	const int value = 6;
	int another = 8;
	const int* const ptr = &value;
	cout<<"\n*ptr = "<<*ptr;
//	*ptr = 100;
//	ptr =&another;
		
	return 0;
}
