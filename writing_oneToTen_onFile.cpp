//program to write number from 1 to 10 in a txt file
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main(){
	/// opening file and creating
	ofstream file("onetoten.txt");
	if(!file){
		cout<<"\nUnsuccesfull in creating file";
		return 1;
	}
	else{
			// writing to the file
	for(int i = 1; i <= 10; i++){
		file<<i<<endl;
	}
	file.close();
	}

}
