//class template: useful when class defines smth that is independent of data type
#include<iostream>
using namespace std;

template <class T, class T1>
class A{
	T num1;
	T1 num2;
	public:
		A(T n1, T1 n2): num1(n1), num2(n2){
		}
		//add function
		void add(){
			cout<<"sum: "<<num1+num2<<endl;
		}
};
int main(){
	A<int, double> integer(2, 1.2232);
	integer.add();
}
