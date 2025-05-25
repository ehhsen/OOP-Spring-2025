/*Q4. Operator Overloading – Inventory Management
Define a class InventoryItem with private members itemName and quantity.
Overload the + and - operators to perform the following:
• Increase the quantity of items (restocking)
• Decrease the quantity of items (selling)
Demonstrate both operations using objects in main() and display the final quantity of
the inventory item.*/
#include<iostream>
#include<string>
using namespace std;
class InventoryItem{
	string itemName;
	int quantity;
	public:
				
	//constructor0
	InventoryItem(){
	
	itemName = "";
	quantity = 0;		
	}
	
	// constructor1
	InventoryItem(string n, int q): itemName(n), quantity(q){}
	
	//overloading +
	InventoryItem operator+( int q){
		InventoryItem I;
		I.quantity = this->quantity + 	q;
		I.itemName = this->itemName;
		return I;		
	}
	//overloading -
	InventoryItem operator-(int q){
		InventoryItem I2;
		I2.quantity = this->quantity - 	q;
		I2.itemName = this->itemName;
		return I2;		
	}
	// input funtion
	void Input(){
		cout<<"\nEnter item name: ";
//		gets(this->itemName);
		getline(cin, this->itemName);
		cout<<"\nEnter Quantity: ";
		cin>>this->quantity;
	}
	//dsiplaying
	void display(){
		cout<<"\nName: "<<this->itemName<<" Quantity "<<this->quantity;
	}		
};

 int main(){
 	InventoryItem item1;
 	item1.Input();
 	item1.display();
 	///////////////
 	InventoryItem item4;
 	item4 = item1 + 10;
	item4.display();
	/////////////
 	InventoryItem item3;
	item3= item1 - 5;
	item3.display();
	
	return 0;
 	//////////////
 	

 	
 	
 	
 }
