/*Weather Data Analysis (2D Dynamic Array)
Background: You are working on a program to analyze weather data for a city. The data is collected
daily for a month, and you need to store and process it.
Task:
1. Ask the user to input the number of days in the month (e.g., 28, 30, or 31).
2. Dynamically allocate a 2D array to store the temperature data for each day (rows = days, columns
= 3 for min, max, and average temperature).

3. Populate the array with user-provided temperature data.

4. Perform the following analysis:

• Find the hottest and coldest day of the month.
• Calculate the monthly average temperature.
• Display the temperature trends (e.g., days with increasing max temperature).

5. Deallocate the memory after use.
Real-world connection: This scenario simulates real-world weather data analysis, where data is
stored in a tabular format and processed for insights.*/
  

#include<iostream>
#include<iomanip>
#include<iomanip>
using namespace std;
 void display(int [][3], int );

 int main()
 {
 	// defining 2 d array
 	int row, col = 3; 
 	cout<<"\nEnter number of days in month: ";
 	cin>>row;
 	int** weather = new int*[row];
 	// for each row allocate memory in new array
	 for (int i = 0; i < row; i ++)
	 {
	 	weather[i] = new int[col];
	 	
	  } 
	cout<<"\nInput Values";
	for(int i = 0; i < row; i ++)
	{
		cout<<"\nEnter Minimum Temperature for day "<<(i+1)<<" : ";
		cin>>weather[i][0];
		cout<<"Enter Maximum Temperature for day "<<(i+1)<<" : ";
		cin>>weather[i][1];
		cout<<"Enter Average Temperature for day "<<(i+1)<<" : ";
		cin>>weather[i][2];		

	}
		// display elements
	cout<<"\n---------------------------";
	cout<<setw(5)<<"\n Day "<<setw(10)<<" Minimum "<<setw(10)<<" Maximum "<<setw(10)<<" Average";
	for(int i = 0, j = 0; i < row; i ++)
	{cout<<"\n";
	cout<<setw(5)<<(i+1)<<setw(10)<<weather[i][0]<<setw(10)<<weather[i][1]<<setw(10)<<weather[i][2];
	}
	
	

//	Find the hottest and coldest day of the month.
// to find the hottest and coldest day we iterate for all days of of a months max temp and store in hot and vice vera for cold one
	int hot = weather[0][0], cold = weather[0][0], h_index, c_index;
	int monthly_average = 0;
	for(int i = 0; i < row; i ++)
	{
		for( int j = 0; j < 2; j ++)
		{
			if ( hot < weather[i][j])
			{
				hot = weather[i][j];
				h_index = (i+1);
			}
			if( cold > weather[i][j])
			{
				cold = weather[i][j];
				c_index = (i+1);	
			}
		}
// Calculating the monthly average temperature
// we iterate through the 3rd column of each row
		monthly_average += weather[i][2];

	}
	cout<<"\nhottest day of month is "<<h_index<<" and the temperature is "<<hot<<endl;
	cout<<"coldest day of month is "<<c_index<<" and the temperature is "<<cold<<endl;
	cout<<"\nMonthly average temperature is "<<( monthly_average/row)<<endl;
	delete []weather;
	return 0;
 }




