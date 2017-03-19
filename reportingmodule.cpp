
// reporting .cpp



#include <iostream>
using namespace std;

void sortBytitle ()
{
    
    cout << "Inventory list report is selected" << endl;
    
}

void sortBywholesaleprice ()
{
    
    cout << "Inventory wholesale value report is selected" << endl;
    
}

void sortByretailprice ()

{
    
    cout << "Inventory retail value report is selected" << endl;
    
}

void sortByquantity ()

{
    
    cout << "Inventory listing by quantity report is selected" << endl;
    
}

void sortBydate ()
{
    
    cout << "Inventory listing by age report is selected" << endl;
    
}

// does this need?

void sortBycost ()
{
    
    cout << "Inventory listing by cost report is selected" << endl;
    
}

/*
void sortBycost (Book array[], int size) {
    int startScan, minIndex;
    double minValue;
    for (startScan = 0; startScan < (size − 1); startScan++) {
        minIndex = startScan;
        minValue = book[startScan].getcost;
        for(int index = startScan + 1; index < size; index++) {
            if (book[index].getcost < minValue) {
                minValue = array[index].getcost;
                minIndex = index; }
        }
        Book[minIndex].getcost = array[startScan].getcost;
        array[startScan].getcost = minValue;
    } }
*/
 
// need?
void sortByauthor ()
{
    
    cout << "Inventory author report is selected" << endl;
    
}

//need?
void sortByISBN ()
{
    
    cout << "Inventory ISBN report is selected" << endl;
    
}



void reports()

{
    
    int ch;
    
    cout << endl;
    
    do
        
    {
        
        cout << "                                       " << endl;
        
        cout << " Serendipity Booksellers " << endl;
        
        cout << "                                       " << endl;
        
        cout << " Reports " << endl;
        
        cout << " " << endl;
        
        cout << " 1. Inventory Listing " << endl;
        
        cout << " 2. Inventory WholeSale value " << endl;
        
        cout << " 3. Inventory Retail Value" << endl;
        
        cout << " 4. Listing by Quantity " << endl;
        
        cout << " 5. Listing by Cost " << endl;
        
        cout << " 6. Listing by Age " << endl;
        
        cout << " 7. Return to the main menu " << endl;
        
        cout << " " << endl;
        
        cout << "Enter your choice" << endl;
        
        cin >> ch;
        
        switch(ch)
        
        {
                
            case 1: sortBytitle();break;
                
            case 2: sortBywholesaleprice();break;
                
            case 3: sortByretailprice();break;
                
            case 4: sortByquantity();break;
                
            case 5: sortBycost();break;
                
            case 6: sortBydate();break;
                
            case 7: break;
                
            default: cout<<"Please enter the right choice"<<endl;break;
                
        }
        
    }while(ch!=7);
    
}


