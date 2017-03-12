#define _CRT_SECURE_NO_WARNINGS

#ifndef Inventory_H
#define Inventory_H
#include "Book.h"
#include <fstream>
#include <iostream>

using namespace std;


class Inventory
{
private:
	Book books[100];
	ifstream bookList;
public:
	void FileToArray(Book inventory, ifstream bookList)
	{
		bookList.open("Booklist.txt");
		//need to skip the first line before readings(headings)
		for (int i = 0; i < 100; i++)
		{
			bookList >> inventory[i].setTitle;
			bookList >> inventory[i].setAuthor;
			bookList >> inventory[i].setPublisher;
			bookList >> inventory[i].setISBN;
			bookList >> inventory[i].setQuantity;
			bookList >> inventory[i].setWholesale;
			bookList >> inventory[i].setRetail;
			bookList >> inventory[i].setDate;
		} //OR: Until you hit '\n', continue to read in values. These eight set values will be used for Book One.
			//Then. move on to the next line of the file, and read until '\n' again, assigning these new values to our 8 variables.
	}
	void ArrayToFile(Book inventory)
	{
		cout << "What file would you like to save your book list in(no spaces please)?";
		string fileName;
		cin >> fileName;
		ofstream NewBookList(fileName);
		for (int i = 0; i < 100; i++)
		{
			NewBookList << "Title\tAuthor\tPublisher\tISBN\tQuantity\tWholesale\tRetail\tDate\n";
			NewBookList << inventory[i].getTitle << "\t";
			NewBookList << inventory[i].getAuthor << "\t";
			NewBookList << inventory[i].getPublisher << "\t";
			NewBookList << inventory[i].getISBN << "\t";
			NewBookList << inventory[i].getQuantity << "\t";
			NewBookList << inventory[i].getWholesale << "\t";
			NewBookList << inventory[i].getRetail << "\t";
			NewBookList << inventory[i].getDate << "\t\n";
		}
	}
};
#endif
