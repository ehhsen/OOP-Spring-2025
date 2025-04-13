// using member initialization list f0r constant type 
#include<iostream>
#include<iomanip>
using namespace std;
class test{
	const int t;
	public:
	test(int t):  t(t){} 
	int gett()
	{return t;
	}
};
int main(){
	test testobj(5);
	cout<<testobj.gett();
	return 0;
}