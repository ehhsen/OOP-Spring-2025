//count lines not starting with letter A
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void countlines(){
	fstream file("count_lines_without_initialA.txt");
	char st[100];
	int line = 0;
	if(!file){
		cout<<"File can not be  opened";
	}
	while(file.getline(st,100))
	{
		if(st[0] != 'A')
			line++;
	}
	cout<<"\nlines that do not start with A are: "<<line;
	
}
int main(){
	countlines();
	return 0;
	
}

