// find average
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	// opem a fil in read mode, find even , odd, average.
	ifstream file("values.txt");
	
	// declaring variables
	int x;
	double avg;
	int even =0, odd = 0;
	int sum;
	
	// opening file
	if(!file){
		cout<<"\nCan't open file";
		
	}
	else{
		while(!file.fail()){
			file>>x;
			// check for even odd
			if(x %2 == 0){
				even++;
				sum+=even;
			}
				else if(x %2!=0){
				odd++;
				sum+=odd;
				}
		
		}//end of while
		avg = sum/(even+odd);
		// displaying
		cout<<"\nEven : "<<even;
		cout<<"\nOdd : "<<odd;
		cout<<"\nsum : "<<sum;
		cout<<"\naverage : "<<avg;
		
	}  // end of else
	return 0;
}// end of main
