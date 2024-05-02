#include <iostream>
using namespace std;

class Shop
{
    int ItemId[100];
    int ItemPrise[100];
    int counter;

public:
    void initCounter(void) { counter = 0; };
    void setPrise(void);
    void displayPrise(void);
};

void Shop ::setPrise(void)
{
    cout << "Enter Id of Item no. " << counter + 1 << endl;
    cin >> ItemId[counter];
    cout << "Enter Prise of Item" << endl;
    cin >> ItemPrise[counter];
    counter++;
}

void Shop ::displayPrise(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Item Id with Prise " << ItemId[i] << " is " << ItemPrise[i] << endl;
    }
}
int main()
{
    Shop dukan;
    dukan.initCounter();
    dukan.setPrise();
    dukan.setPrise();
    dukan.setPrise();
    dukan.displayPrise();
    return 0;
}