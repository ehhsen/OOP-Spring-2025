// writing class objcts to a file
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
class students{
	int roll;
	int semester;
	char name[100];
	public:
		void getdata();
		void display();
};
void students::getdata(){
	cin.ignore();
	cout<<"\nEnter name: ";
	cin.getline(name, 100);
	cout<<"\nEnter semester: ";
	cin>>semester;
	cout<<"\nEnter Roll number: ";
	cin.ignore();
	cin>>roll;	
}
void students::display(){
	cout<<"\nName: "<<name;
	cout<<"\nSemester: "<<semester;
	cout<<"\nRoll number: "<<roll;
} 
int main(){
	students s[2]; // array of type students
	// open file for writing
	fstream file("report.txt" , ios::out);
	if(!file)
{		cout<<"\nfile cant be opened";
		return 1;
}
	else{	
	cout<<"Writing into the file";
	for(int i = 0; i <2; i++){
		s[i].getdata();
		file.write((char*)&s[i], sizeof(s[i]));
	}
	file.close();
	
	// open again for reading
	fstream rfile("report.txt", ios::in);
	// reading students information from file
	for(int i = 0; i <2; i++){
		rfile.read((char*)&s[i], sizeof(s[i]));
		s[i].display();
	}
	rfile.close();
	}
	return 0;
	
}



