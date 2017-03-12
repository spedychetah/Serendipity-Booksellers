#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

void accessCashier();
void accessInventory();
void accessReporting();


/*
Main To- Do:
1)Calls inventory, reporting, or cashier, depending on what the user wants
*/

int main()
{
	cout << "Welcome to the Serendipity Bookstore online user interface!";
	int entry;
	do
	{
		cin.clear();
		cout << "\n\nPlease select a module:\n\n1)Cashier Module\n2)Inventory/Database Module\n3)Reporting Module\n4)Exit\nEnter"
			<< " your choice: 1/2/3/4	";
		cin >> entry; //entry can only hold integers. Inputting a non integer will crash the program. EXCEPTION HANDLING!!
		if (entry != 4)
		{
			switch (entry)
			{
			case 1: //call Cashier's driver function
				break;
			case 2: //call Inventory
				break;
			case 3: //call Reporting
				break;
			default: cout << "Invalid menu choice. Please try again: ";
			}
		}
	} while (entry != 4);

	cout << "\n\n\n\t\tThank you for using our system! Good-bye!";

	cin.get();
	cin.get();
	system("pause");
	return 0;
}
