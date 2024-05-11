#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
       Complex(int x, int y);  // Constructor declaration
       void printNumber()
    {
        cout << "Your number is " << a << " + " << b <<"i"<<endl;
    }
};
Complex::Complex(int x, int y)  // ---->This is a Parameterized constructor as It takes no parameters
{
    a = x;
    b = y;
}
int main(){
    // Implicit call
    Complex a(4,7);
    // Explicit call
    Complex b = Complex(4,7);
    a.printNumber();
    b.printNumber();
    return 0;
}
