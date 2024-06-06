#include<iostream>
using namespace std;
class Base1{
    public:
       void greet(){
        cout<<"How are you?"<<endl;
       }
};

class Base2{
    public:
       void greet(){
        cout<<"Kaise ho aap?"<<endl;
       }
};

class Derived :public Base1, public Base2{
    int a;
    public:
       void greet(){
        Base1 :: greet();
       }
};

class b{
    public:
       void say(){
        cout<<"Hello World"<<endl;
       }
};

class D : public b{
    int a;
    // D's new say() methord will override base class's say() mathod
    public:
       void say(){
        cout<<"Hello How are you?"<<endl;
       }
};
int main(){
    // Ambibuity 1
    // Base1 Base1obj;
    // Base2 Base2obj;

    // Base1obj.greet();
    // Base2obj.greet();

    // Derived d;
    // d.greet();

    // Ambibuity 2
    D obj1;
    obj1.say();

    return 0;
}