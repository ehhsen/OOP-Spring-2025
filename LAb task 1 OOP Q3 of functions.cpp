// Function with default arguments

#include<iostream>
#include<iomanip>
using namespace std;

//void printStudentDetails(char[], int = 0, char = 'N', double = 0.0)
void printStudentDetails(char name[], int rolNo = 0, char grade = 'N', double marks = 0.0)
{
	cout<<"Name: "<<name;
	cout<<"\tRoll Number: "<<rolNo;
	cout<<"\tGrade: "<<grade;
	cout<<"\tMarks: "<<marks<<endl;
}
int main()
{
	char name[50] = "Ahsan ALi";
	printStudentDetails(name);
	printStudentDetails(name, 1);
	printStudentDetails(name, 1, 'A');	
	printStudentDetails(name, 1, 'A', 87.2);
	return 0;
	
}
