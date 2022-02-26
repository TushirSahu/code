#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemprice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};
void shop::setprice(void)
{
    cout << "Enter the itemId " << counter +1 << endl;
    cin >> itemId[counter];                                
    cout << "enter the price " << endl;
    cin >> itemprice[counter];
    counter++;
};
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the Id " << itemId[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}