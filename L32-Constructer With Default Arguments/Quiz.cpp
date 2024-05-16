#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
       Complex(int x, int y);
       void printNumber()
    {
        cout << "Your number is " << a << " + " << b <<"i"<<endl;
    }
};
Complex::Complex(int x, int y=9)
{
    a = x;
    b = y;
}
int main(){
    Complex a(4,7),b(4);
    
    a.printNumber();
    b.printNumber();
    return 0;
}
