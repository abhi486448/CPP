#include<iostream>
using namespace std;

// syntax for inherating in multiple inheritance
// class DerivedC: visibility-mode base1, visibility-mode base 2
// {
//     Class body of class "DerivedC"
// };

class Base1{
    protected:
       int Base1int;
    public:
       void set_base1(int a){
        Base1int = a;
       }
};

class Base2{
    protected:
       int Base2int;
    public:
       void set_base2(int a){
        Base2int = a;
       }
};

class Base3{
    protected:
       int Base3int;
    public:
       void set_base3(int a){
        Base3int = a;
       }
};

class Derived: public Base1, public Base2, public Base3{
    public:
       void show(){
        cout<<"The value of Base1int is "<<Base1int<<endl;
        cout<<"The value of Base2int is "<<Base2int<<endl;
        cout<<"The value of Base3int is "<<Base3int<<endl;
        cout<<"The Sum of Base1int and Base2int is "<<Base1int + Base2int + Base2int<<endl;
       }
};
/*
The Inherited derived class will look something loke this:
Data members:
    base1int --> protected
    base2int --> protected
Member Function
    set_base1int() --> public
    set_base2int() --> public
    show() --> public
*/
int main(){
    Derived harry;
    harry.set_base1(25);
    harry.set_base2(5);
    harry.set_base3(5);
    harry.show();
    return 0;
}