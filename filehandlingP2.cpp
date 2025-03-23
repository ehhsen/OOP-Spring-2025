#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
	string line;
	ifstream file("test.txt");
	if(!file)
	{
		cout<<"\nFile can't be opened ";
		return 1;
	}
	else{
// read whole document
		while(getline(file, line))
		{
			cout<<line<<endl;
		}
// read single line
//		getline(file, line);
//		cout<<line;
		file.close();
		
	}
	
}
