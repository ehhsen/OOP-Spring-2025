/*Dynamic Inventory Management (1D Dynamic Array)
Background: You are building an inventory management system for a small store. The store sells a
variable number of products, and the inventory needs to be updated dynamically.
Task:
1. Ask the user to input the number of products in the store.
2. Dynamically allocate a 1D array to store the quantity of each product.
3. Populate the array with initial quantities (user input).
4. Implement the following features:
	• Add a new product to the inventory (resize the array).
	• Remove a product from the inventory (resize the array).
	• Update the quantity of a specific product.
	• Display the current inventory.
5. Deallocate the memory after use.
Real-world connection: This scenario reflects real-world inventory systems where products are
added or removed dynamically, and quantities need to be updated.*/

#include<iostream>
#include<iomanip>
using namespace std;
 int main()
 {
 	int no_p, new_size;
 	cout<<"\nEnter number of products available in the store: ";
 	cin>>no_p;
 	int *products = new int[no_p];
 	cout<<"\nInput the Quantity of Products:";
 	for (int i = 0; i <  no_p; i++)
 	{
 		cout<<"\n"<<i<<"  ";
 		cin>>products[i];
	 }
	 
	// display
	
 	for (int i = 0; i <  no_p; i++)
 	{
 		cout<<"\n"<<products[i];
 
	 }
//	 cout<<" \n\n resize array";
//	 cout<<"\nEnter new size";
	char a;
	cout<<"\nWant to add more product Quantity[y,n] ";
	cin>>a;
	if (a == 'y')
	{		
		// input size of new array
		cout<<"\nInput New size: ";
		cin>>new_size;
		if ( new_size > no_p)
		{		
		// creating a new array
		int* new_products = new int[new_size];
		// copying existing products to the new array
		for(int i = 0; i < no_p; i ++)
		{
			new_products[i]= products[i] ;
		}
		// taking input for the newly created space in array
		for(int i = no_p; i < new_size; i++)
		{
			cout<<"\n Add new quantity: ";
			cin>>new_products[i];
		}
		// de allocate products
		delete[] products;
		
		// renaming 
		products = new_products;
		no_p = new_size;
		
 		for (int i = 0; i <  new_size; i++)
 	   {
 			cout<<"\n"<<products[i];
 
		}
		} 
		else cout<<"\nNew entered size must be greater than previous one ";// end of size checking 
	}  // end of yes no if condition 

	// remove a product 
	char remove;
	int rem;
	cout<<"\nDo you want to remove a products quantity [y,n] ";
	cin>>remove;
	if (remove == 'y')
	{
		cout<<"\nEnter index of value to remove ";
		cin>>rem;
		if(rem >-1 && rem < no_p)
		{
		// removing value
		int newSize = no_p -1;
		int* new_products = new int[newSize];
		
		// copying existing products to the new array
		int newIndex = 0;
		for(int i = 0; i < no_p+1 ; i ++)
		{
			if (i != rem)
			{
				new_products[newIndex] = products[i] ;
				newIndex++;
			}
							
		}
		cout << "Product removed successfully." << endl;
		delete[] products;
    	products = new_products;
    	no_p = newSize;
		
		}// end of rem 	
		else
			cout<<"\nIndex not Found";
			   	    		
	} // end of yes no remove
	// display again
	cout<<"\nData at present";
			// display
	
 	for (int i = 0; i <  no_p; i++)
 	{
 		cout<<"\n"<<products[i];
 
	 }
	char update;
	cout<<"\nDo you want to update the products data? [y/n] ";
	cin>>update;
	if (update == 'y')
	{
		
	
	int index;	 
	cout<<"\nUpdate data";
	cout<<"\nEnter the index of quantity you want to update:";
	cin>>index;
	if(index >-1 && index < no_p) 
{
		for (int i = 0; i < no_p; i++)
	{
		if (index == i)
		{
	cout<<"\nUpdated quantity: ";
	cin>>products[i];			
		}
	}
}
else
	cout<<"\nInvalid Index";	

} // end yes  no 
  cout<<"\nDisplaying again";
 	for (int i = 0; i <  no_p; i++)
 	{
 		cout<<"\n"<<products[i]; 
	 }  
	delete[] products;
 	return 0;
 	
 }
