// Function with default arguments
/* 3 Lab Task 3: Function Template
Objective: Implement a program to demonstrate the use of function templates
for generic programming.
Task:
• Create a C++ program with a function template swapValues that takes
two arguments of any data type and swaps their values.
• In the main function, call the swapValues function with the following sets
of arguments:
– Two integers (e.g., 10 and 20).
– Two floating-point numbers (e.g., 3.14 and 2.71).
– Two characters (e.g., ’A’ and ’Z’).
• Display the values before and after swapping for each function call.
*/

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
