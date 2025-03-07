// Function with default arguments\
/* 2 Lab Task 2: Function with Default Arguments
Objective: Implement a program to demonstrate the use of default arguments
in functions.
Task:
• Create a C++ program with a function printStudentDetails that takes
the following parameters:
– name (string, no default value)
– rollNo (int, default value = 0)
– grade (char, default value = ’N’)
– marks (double, default value = 0.0)
*/
#include<iostream>
#include<iomanip>
using namespace std;

//void printStudentDetails(char[], int = 0, char = 'N', double = 0.0)
void printStudentDetails(char name, int rolNo = 0, char grade = 'N', double marks = 0.0)
{
	cout<<"Name: "<<name;
	cout<<"\nRoll Number: "<<rolNo;
	cout<<"\nGrade: "<<grade;
	cout<<"\nMarks: "<<marks;
}
int main()
{

	 

	printStudentDetails("Ahsan");
	printStudentDetails("Ahsan", 1);
	printStudentDetails("Ahsan", 1, 'A');	
	printStudentDetails("Ahsan", 1, 'A', 87.2);
	return 0;
	
}
