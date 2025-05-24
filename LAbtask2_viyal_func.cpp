/*Q2. Abstract Class with Friend Function
Create an abstract class Account with a pure virtual function void showBalance().
Then implement a class SavingsAccount that inherits from Account and contains a
private data member balance.
Create a separate class FriendAuditor with a friend function void checkBalance(SavingsAccount&).
This function should access the private balance and display it. Demonstrate the working
in main().*/
#include<iostream>
using namespace std;

class Account{
	public:
		// pure virtual function
		virtual void showBalance() = 0;
	
};
//forward declaration of class3 
class FriendAuditor;


class SavingsAccount: public Account{
	double balance;
	public:
		//constructor
		SavingsAccount(double b){
			balance = b;
		}
		void showBalance(){
			cout<<"Balance in Savings Account: "<<balance<<endl;
		}
    // Declare friend function
    friend void checkBalance(SavingsAccount&);
};

class FriendAuditor{
	// friend function
	friend void checkBalance(SavingsAccount&);
	
};

// Definition of friend function
void checkBalance(SavingsAccount& SA) {
    cout << "Balance by Friend function: $" << SA.balance << endl;
}
int main(){
   // Create a SavingsAccount object
    SavingsAccount account(1000.50);
    
    // Demonstrate showBalance through the Account interface
    Account* accountPtr = &account;
    accountPtr->showBalance();
    
    // Demonstrate friend function
    checkBalance(account);
    
    return 0;
	
}
