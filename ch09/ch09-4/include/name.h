namespace SALES{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        int max = 0;
        int min = 0;
    };
    void setSales(Sales& s,const double ar[],int n);
    void setSales(Sales& s);
    void showSales(const Sales& s);
}