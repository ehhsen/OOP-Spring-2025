/*Write method pow that takes integers x and y as parameters and returns xy.	xy = x * x * x * ... * x  (y times, in total)

An iterative solution:

// not recursive
int pow(int x, int y) {
    int product = 1;
    for (int i = 0; i < y; i++) {
        product = product * x;
    }
    return product;
}
*/
#include<iostream>
using namespace std;
int pow(int num, int exp){
	if(exp == 0)
		return 1;
	
	return num*pow(num, exp-1);
	
}
int main(){
	cout<<" "<<pow(2, 3);
	return 0;
}
