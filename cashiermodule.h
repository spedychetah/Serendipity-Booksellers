#define _CRT_SECURE_NO_WARNINGS

#include "Inventory.h"

Fcns:
Driver function(called from main)
{
do
{
findBook(in database)
displayBook //use everywhere!
Transaction
Update
do you want to checkout another book? y/n(entry)
} while(entry == y)
}

/*

find book:  check if book is available-this is a sorting function - not necessarily have to be a friend function b/c it is NOT editing
display book: cout formatting + pricing OR cout "not available"
transaction: how many books? total pricing: Has the transaction completed? y -> update inventory function
update inventory: IT MUST EDIT QUANTITY! Use inventory's own edit functions?

*/
