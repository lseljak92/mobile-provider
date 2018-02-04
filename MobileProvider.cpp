/*
 * Description: Calculate a customer's monthly bill according to the purchased package.
 * Name: Luciana Seljak
 * File name: MobileProvider.cpp
 *
 */

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main ()
{
// Define variables needed
const double PACKAGE_A = 39.99,
	     MINUTES_PACKAGE_A = 450,
	     ADDITIONAL_FEE_A = 0.45,
	     PACKAGE_B = 59.99,
	     MINUTES_PACKAGE_B = 900,
	     ADDITIONAL_FEE_B = 0.40,
	     PACKAGE_C = 69.99;
int choice;
int minutes;

//Display menu
	cout << endl; 
	cout << "Select a subscription package: \n";
	cout << endl;
	cout << "1. Package A" << endl << "2. Package B" << endl << "3. Package C" << endl << "4. Exit" << endl;
	cout << endl;
	
	cin >> choice;
	
	switch (choice){
		
		case 1:
		   cout << "How many minutes were used? ";
		   cin >> minutes;
		   
		   if (minutes > MINUTES_PACKAGE_A) 
			cout << "The total amount due is $" << (PACKAGE_A + (minutes - MINUTES_PACKAGE_A) * ADDITIONAL_FEE_A) << endl;
		   else
			cout << "The total amount due is $" << PACKAGE_A << endl;
		  
		   break;
		case 2:
		   cout << "How many minutes were used? ";
		   cin >> minutes;
		   
		   if (minutes > MINUTES_PACKAGE_B) 
			cout << "The total amount due is $" << (PACKAGE_B + (minutes - MINUTES_PACKAGE_B) * ADDITIONAL_FEE_B) << endl;
		   else
			cout << "The total amount due is $" << PACKAGE_B << endl;
		   
		   break;
		case 3:
		   cout << "How many minutes were used? ";
		   cin >> minutes;

		   cout << "The total amount due is $" << PACKAGE_C << endl;
		   break;
		case 4:
		   cout << endl;
		   break;
		default:
		   cout << "That is not a valid number." << endl;
		}
	cout << endl;
		
	return 0;
}
	     
// Sample Run
/*

Select a subscription package: 

1. Package A
2. Package B
3. Package C
4. Exit

1
How many minutes were used? 500
The total amount due is $62.49

///////////////////////////////////

Select a subscription package: 

1. Package A
2. Package B
3. Package C
4. Exit

2
How many minutes were used? 900
The total amount due is $59.99

///////////////////////////////////

Select a subscription package: 

1. Package A
2. Package B
3. Package C
4. Exit

3
How many minutes were used? 500
The total amount due is $69.99

//////////////////////////////////

Select a subscription package: 

1. Package A
2. Package B
3. Package C
4. Exit

4

/////////////////////////////////

Select a subscription package: 

1. Package A
2. Package B
3. Package C
4. Exit

5
That is not a valid number.


*/
