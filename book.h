#define _CRT_SECURE_NO_WARNINGS
//this is the book class
//it contains member variables and accessors and mutators for the variables. 
//An array of books will be created- you must ensure the program properly accesses all book values.
#ifndef BOOK_H
#define BOOK_H
#include "Date.h"
#include <string>

class Book
{
private: //member variables
Date dateAdded;
string title;
string author;
string publisher;
unsigned long long int ISBN;
int quantity;
double wholesale;
double retail;

public: //member functions
//Setters
void setTitle(string s)
{ title = s; }
void setAuthor(string a)
{ author = a; }
void setISBN(unsigned long long int isbn)
{ ISBN = isbn; }
void setPublisher(string p)
{ publisher = p; }
void setWholesale(double whole)
{ wholesale = whole; }
void setRetail(double ret)
{ retail = ret; }
void setDate(int month, int day, int year)
{ 
dateAdded.setMonth(month);
dateAdded.setDay(day);
dateAdded.setYear(year);
}
void setQuantity(int q)
{ quantity = q; }

//Getters
string getTitle()
{ return title; }
string getAuthor()
{ return author; }
unsigned long long int getISBN();
string getPublisher();
double getWholesale();
double getRetail();
Date getDate();
int getQuantity();


};

