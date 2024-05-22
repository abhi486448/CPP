#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    float salary;
       Employee(){}
       Employee(int inpId){
        id = inpId;
        salary = 24.0;
       }
};

// Derived Class syntex
/*
Class {{derived-class-name}} :{{visiblity-mode}} {{base-class}}
{
    class members/methords/etc...
}
Note:
1. Default visibility mode is private
2. Public visibility Mode: Public Members of the base class become public members of the derived class
3. Private visibility Mode: Public members of base class become Private members of the derived class
4. Private members are never inherited
*/

// Creating a programmer class derived from Employee Base class
class Programmer : public Employee{
    public:
    int languageCode;
    Programmer(int inpId){
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main(){
    Employee harry(4), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();
    return 0;
}