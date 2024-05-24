#include<iostream>
using namespace std;

class Base{
    protected:
       int a;
    private:
       int b;
};

/*
                         public derivaction       protected derivaction     private derivaction
1. private member        not inherited            not inherited             not inherited
2. protected member      protected                protected                 private
3. public member         public                   protected                 private
*/

class Derived : protected Base{

};
int main(){
    Base b;
    Derived d;
    // cout<<d.a;  will not work since a in protected in both Base and Derived class
    return 0;
}