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
 	int no_p;
 	cout<<"\nEnter number of products: ";
 	cin>>no_p;
 	int *products = new int[no_p];
 	cout<<"\npopulate the array:";
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
	cout<<"\nAdd a new product to the array [y,n]";
	cin>>a;
	if (a = 'y')
	{
		no_p +=1;
		cout<<"\nadd product : ";
		int add = no_p - 1;
		cin>>products[add];
	}
		// display
	
 	for (int i = 0; i <  no_p; i++)
 	{
 		cout<<"\n"<<products[i];
 
	 }
	// remove a product 
	char remove;
	int rem;
	cout<<"\nDo you want to remove a product[y,n]";
	cin>>remove;
	if (remove == 'y')
	{
		cout<<"\nEnter a value to remove ";
		cin>>rem;
		for ( int i = 0; i < no_p; i ++)
		{
			if (rem == products[i])
			{
				cout<<"\nProduct found ";
				cout<<"\nremoving product at index "<<i<<endl;
				for( int j = i; j < no_p; j++)
				{
					swap(products[j], products[j+1]);
				}
				cout<<"Resizing the array  now";
				no_p--;
				break;
				
			}
		}
	}
	// display again
	cout<<"\nData at present";
			// display
	
 	for (int i = 0; i <  no_p; i++)
 	{
 		cout<<"\n"<<products[i];
 
	 }
	 int index;
	cout<<"\nUpdate data";
	cout<<"\nEnter the index of quantity you want to update:";
	cin>>index;
	for (int i = 0; i < no_p; i++)
	{
		if (index == i)
		{
	cout<<"\nUdated quantity: ";
	cin>>products[i];			
		}
	}
  
  cout<<"\nDisplaying again";
 	for (int i = 0; i <  no_p; i++)
 	{
 		cout<<"\n"<<products[i];
 
	 }  
	delete[] products;
 
	 
	 
	 	
 	return 0;
 	
 }