#include<iostream>
using namespace std;
template <class T> 
class info{
	public:
		info(T A){
			cout<<"\n A  = "<<A<<" size = "<<sizeof(A);
		}
};
int main(){
	info<char> p('x');
	info<int> q(10);
	info<float> r(12.333);
	return 0;
}
