/*Q5. Friend Function – Temperature Conversion
Create a class Thermometer with a private data member temperatureCelsius.
Write a friend function void showFahrenheit(Thermometer&) that converts 
and displays the temperature in Fahrenheit using the formula:
Demonstrate its usage in main() by accepting temperature in Celsius and displaying the
Fahrenheit equivalent using the friend function.*/
#include<iostream>
using namespace std;
class Thermometer{	
	double temperatureCelsius;
	
	public:
		Thermometer(double  t): temperatureCelsius(t){};
		
		friend void showFahrenheit(Thermometer&);	
};
void showFahrenheit(Thermometer& T){
	
	T.temperatureCelsius = T.temperatureCelsius * 9/5 + 32;
	cout<<"\nTemperature in Fahrenheit "<<T.temperatureCelsius;
}
int main(){
	Thermometer C(100);
	showFahrenheit(C);
	
}


