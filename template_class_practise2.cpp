#include<iostream>
using namespace std;
template <class T, int size>
class A{
	T a[size];
	public:
		// input
		void input(){
			int i = 1;
			for(int j = 0; j <size; j++){
				a[j] = i; i++;
			}
		}
		// display
		void display(){
			for(int i=0; i<size; i++){
				cout<<a[i];
			}
		}
};
int main(){
	A<int, 5> array;
	array.input();
	array.display();
	return 0;
}
