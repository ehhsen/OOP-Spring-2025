#include <iostream>
using namespace std;


template <typename T> 
T myMax(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	cout << myMax<int>(3, 7) << endl;   	// Call myMax for int
	cout << myMax<float>(3.2, 7.5)<< endl;	// call myMax for double
	cout << myMax<char>('g', 'e')<< endl;	// call myMax for char

	return 0;
}

