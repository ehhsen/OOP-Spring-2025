// function template
#include<iostream>
template <typename T>
T add(T a, T b){
	return a+b;
}

using namespace std;
int main(){
	cout<<add<int>(2,5)<<endl;
//	cout<<add<char>('67', '0')<<endl;
	cout<<add<double>(123.323,43.222)<<endl;
	return 0;
	
}
