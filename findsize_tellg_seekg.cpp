// find the size of file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int start, end;
	ifstream file("data.txt");
	// currrent location
	file.seekg(0, ios::beg);
	start  = file.tellg();
	cout<<"\nStarting byte: "<<start;
	// end 
	// move pointer
	file.seekg(0, ios::end);
	
	end = file.tellg();
	cout<<"\nEnding byte"<<end;
	cout<<"\nTotal size: "<<(end-start)<<endl;
	return 0;
	
	
}
