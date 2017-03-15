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
	int arrsize = 100;
	Book inventory[arrsize];
public:
	InventoryModule(){}
	void setArraySize(int);
	void inventoryDriver()
	{
		int choice;
		do{
			choice = displayInvenu();
			if(choice == 1)
			if (choice == 2)
			if (choice == 3)
			if (choice == 4)
		}while(choice != 5);
	}
	int displayInvenu(){
		int entry;
		cout << "Inventory Database Menu:\n";
		cout << "1) Look up a book\n";
		cout << "2) Edit a book\n";
		cout << "3) Add a book\n";
		cout << "4) Delete a book\n";
		cout << "5) Return to Main Menu\n";
		cout << "Enter your choice: ";
		cin >> entry;
	}
	void FileToArray(fstream &bookList)
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
	void ArrayToFile(fstream &bookList)
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
	void sortBytitle () {
		int startScan, minIndex;
		string minValue;
		for (startScan = 0; startScan < (size − 1); startScan++) {
			minIndex = startScan;
			minValue = book[startScan].getTitle;
		}
		for(int index = startScan + 1; index < size; index++) {
			if (book[index].getTitle < minValue) {
				minValue = array[index].getTitle;
				minIndex = index; }
		}
		Book[minIndex].getTitle = array[startScan].getTitle;
		array[startScan].getTitle = minValue;
	}
	
void sortByquantity () {
    int startScan, minIndex;
    int minValue;
    for (startScan = 0; startScan < (size − 1); startScan++) {
        minIndex = startScan;
        minValue = book[startScan].getQuantity;
        for(int index = startScan + 1; index < size; index++) {
            if (book[index].getQuantity < minValue) {
                minValue = array[index].getQuantity;
                minIndex = index; }
        }
        Book[minIndex].getQuantity = array[startScan].getQuantity;
        array[startScan].getQuantity = minValue;
    } }


void sortByAge () {
    int startScan, minIndex;
    Date minValue;
    for (startScan = 0; startScan < (size − 1); startScan++) {
        minIndex = startScan;
        minValue = book[startScan].getDate;
        for(int index = startScan + 1; index < size; index++) {
            if (book[index].getDate < minValue) {    //////////////////////////	OVERLOADED CONSTRUCTOR OF "<" FOR DATE DATA TYPE!!!
                minValue = array[index].getDate;
                minIndex = index; }
        }
        Book[minIndex].getDate = array[startScan].getDate;
        array[startScan].getDate = minValue;
    } }


void sortByRetailPrice () {
    int startScan, minIndex;
    double minValue;
    for (startScan = 0; startScan < (size − 1); startScan++) {
        minIndex = startScan;
        minValue = book[startScan].getRetailprice;
        for(int index = startScan + 1; index < size; index++) {
            if (book[index].getRetailprice < minValue) {
                minValue = array[index].getRetailprice;
                minIndex = index; }
        }
        Book[minIndex].getRetailprice = array[startScan].getRetailprice;
        array[startScan].getRetailprice = minValue;
    } }



void sortByWholesalePrice () {
    int startScan, minIndex;
    double minValue;
    for (startScan = 0; startScan < (size − 1); startScan++) {
        minIndex = startScan;
        minValue = book[startScan].getWholesaleprice;
        for(int index = startScan + 1; index < size; index++) {
            if (book[index].getWholesaleprice < minValue) {
                minValue = array[index].getWholesaleprice;
                minIndex = index; }
        }
        Book[minIndex].getWholesaleprice = array[startScan].getWholesaleprice;
        array[startScan].getWholesaleprice = minValue;
    } }

void sortByAuthor () {
    int startScan, minIndex;
    string minValue;
    for (startScan = 0; startScan < (size − 1); startScan++) {
        minIndex = startScan;
        minValue = book[startScan].getAuthor;
        for(int index = startScan + 1; index < size; index++) {
            if (book[index].getAuthor < minValue) {
                minValue = array[index].getAuthor;
                minIndex = index; }
        }
        Book[minIndex].getAuthor = array[startScan].getAuthor;
        array[startScan].getAuthor = minValue;
    } }

void sortByISBN () {
    int startScan, minIndex;
    unsigned long long int minValue;
    for (startScan = 0; startScan < (size − 1); startScan++) {
        minIndex = startScan;
        minValue = book[startScan].getISBN;
        for(int index = startScan + 1; index < size; index++) {
            if (book[index].getISBN < minValue) {
                minValue = array[index].getISBN;
                minIndex = index; }
        }
        Book[minIndex].getISBN = array[startScan].getISBN;
        array[startScan].getISBN = minValue;
    } }
};
#endif
