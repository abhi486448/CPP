#include <iostream>
using namespace std;

class Base
{
    // private by default in is not inheritabl
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

class Derived : public Base
{
    // Derived publicaly
    int data3;

public:
    void process();
    void display();
};

void Derived::process()
{
    data3 = data2 * getData1();
}

void Derived::display()
{
    cout << "Value of Data1 " << getData1() << endl;
    cout << "Value of Data2 " << data2 << endl;
    cout << "Value of Data3 " << data3 << endl;
}
int main()
{
    Derived dr;
    dr.setData();
    dr.process();
    dr.display();
    return 0;
}