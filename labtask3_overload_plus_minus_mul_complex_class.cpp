/*Q3. Operator Overloading – Complex Numbers
Write a class Complex with real and imaginary parts as data members.
Overload the following operators:
• + to add two complex numbers
• - to subtract one complex number from another
• * to multiply two complex numbers
Create two objects of Complex, take input for each, and display the results of the three
operations.
*/
#include<iostream>
using namespace std;
class Complex{
	int real;
	int imaginary;
	public:
		//default construtor
		Complex(){
			real = 0;
			imaginary = 0;
		}
		
		// parameterized constructor
		Complex(int r, int ima): real(r), imaginary(ima){
		}
		// overloading +
		Complex operator +(const Complex& C){
			Complex C3;
			C3.real = C.real + this->real;
			C3.imaginary = C.imaginary + this->imaginary;
			return C3;
		}
		//overloading -
		Complex operator -(const Complex&C){
			Complex C4;
			C4.real =  this->real - C.real;
			C4.imaginary =  this->imaginary - C.imaginary;
			return C4;
		}
		// overloading *
		Complex operator *(const Complex&C){
			Complex C5;
			C5.real = this->real*C.real - this->imaginary*C.imaginary;
			C5.imaginary = this->real*C.imaginary + this->imaginary*C.real;
			return C5;
		}
		// input function
		void input(){
			cout<<"\n Enter real part :";
			cin>>this->real;
			cout<<"Enter imaginary part : ";
			cin>>this->imaginary;
//			cout<<"Good";
		}		
		//display function
		void display(){
			if (this->imaginary < 0){
				cout<<"\n"<<this->real<<" - "<<-this->imaginary<<"j";			
			}
			else{
				cout<<"\n"<<this->real<<" + "<<this->imaginary<<"j";			
			}		
		}
};
int main(){
	Complex Ca;
	Ca.input();
	Ca.display();
	////////////
	Complex Cb;
	Cb.input();
	Cb.display();
	cout<<"\n---------"<<endl;
	////////////
	Complex Cc;
	Cc = Ca + Cb;
	cout<<"add";
	Cc.display();
	//////////////
	Complex Cd;
	Cd = Ca - Cb;
	cout<<"\nsubtract";
	Cd.display();
	///////////////
	Complex Ce;
	cout<<"\nMultiply";
	Ce = Ca*Cb;
	Ce.display();
	return 0;
}
