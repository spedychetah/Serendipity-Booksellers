

void sortBytitle (Book array[], int size) {
    int startScan, minIndex;
    string minValue;
    for (startScan = 0; startScan < (size − 1); startScan++) {
        minIndex = startScan;
        minValue = book[startScan].getTitle;
        for(int index = startScan + 1; index < size; index++) {
            if (book[index].getTitle < minValue) {
                minValue = array[index].getTitle;
                minIndex = index; }
        }
        Book[minIndex].getTitle = array[startScan].getTitle;
        array[startScan].getTitle = minValue;
    } }


void sortByquantity (Book array[], int size) {
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


void sortBydate (Book array[], int size) {
    int startScan, minIndex;
    int minValue;
    for (startScan = 0; startScan < (size − 1); startScan++) {
        minIndex = startScan;
        minValue = book[startScan].getDate;
        for(int index = startScan + 1; index < size; index++) {
            if (book[index].getDate < minValue) {
                minValue = array[index].getDate;
                minIndex = index; }
        }
        Book[minIndex].getDate = array[startScan].getDate;
        array[startScan].getDate = minValue;
    } }


void sortByretailprice (Book array[], int size) {
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



void sortBywholesaleprice (Book array[], int size) {
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

void sortByauthor (Book array[], int size) {
    int startScan, minIndex;
    sting minValue;
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

void sortByISBN (Book array[], int size) {
    int startScan, minIndex;
    double minValue;
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
