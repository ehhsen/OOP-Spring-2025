// template func to dinfd miimum of an array
#include <iostream>
using namespace std;
template <class t>
t findMin(t a[], int n){
	// alogo
	t min = a[0];
	for(int i = 1; i < n ; i ++)
	{
		if(a[i]<min)
			min = a[i];
	}
	return min;
}
int  main(){
	int a[5] = { 1,5,0,6,4};
	int n = sizeof(a)/sizeof(a[0]);
	
	char b[4] = {'a', 'z', 'j', 'v'};
	int n1 = sizeof(b)/sizeof(b[0]);
	
	cout<<findMin<int>(a, n)<<endl;
	cout<<findMin<char>(b ,n1);
	return 0;
}
