// bubble sort using function template
#include<iostream>
using namespace std;

template <typename T>
void bubble_sort(T a[], int n){
	// we perform the sorting here
	for(int i =0; i <n-1; i++)
		for(int j = n-1; i<j; j--){
			if(a[j]<a[j-1])
				swap(a[j], a[j-1]);
		}
}
int main(){
	char a[4] = {'a', 'z', 'd', 'k'};
	int n = sizeof(a)/sizeof(a[0]);
	bubble_sort<char>(a, n);
	for(int i = 0; i <5; i++){
		cout<<" "<<a[i];
	}
	return 0;
	
}
