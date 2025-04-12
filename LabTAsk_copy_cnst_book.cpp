// copy constructor LAb task:  11/04/25 09:29
/*  Task 2: Class with Copy Constructor
Create a C++ class Book to represent a book’s page count.
• Data Member: int pages (public for simplicity).
• Requirements:
1. Default constructor: Sets pages to 100.
2. Parameterized constructor: Takes an integer to initialize pages
(minimum 1).
3. Copy constructor: Creates a copy of another Book object.
4. Constant member function: showPages() to print pages.
• Question: Implement the class and test it by creating an object with
the parameterized constructor, copying it using the copy constructor,
and displaying the page counts using showPages().
*/
#include<iostream>
#include<string>
using namespace std;
class book{
	public: 
		int pages;
	
	public:
	book(){
		pages = 100;
	}
	book (int a ){
//		a = 1;
		pages = a;
		cout<<"\nVAlue by paramterized constructor "<<pages;
	}
	book(book &b){
		pages = b.pages;
	}
	
	void showpages() const{
		cout<<"\nPages = "<<pages;
	}
};
int main(){
	// parameterized constructor
	book b1(20);
	b1.showpages();
	book b2(b1);
	b1.showpages();
	return 0;
}
