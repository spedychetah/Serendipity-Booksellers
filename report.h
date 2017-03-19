#ifndef REPORT_MODULE
#define REPORT_MODULE


class ReportModule : public Module
{
    
    
    
public:
    ReportModule(BookList*);
    void act();
    string sortBytitle();
    string sortBywholesaleprice();
    string sortByretailpricee();
    string sortByquantity();
    string sortBycost();
    string sortBydate();
    
    
private:
    const static int sortBytitle = 1,
                     sortBywholesaleprice = 2,
                     sortByretailpricee = 3,
                     sortByquantity = 4,
                     sortBycost = 5,
                     sortBydate = 6;
    
    void sort(int st);
    
};

#endif
