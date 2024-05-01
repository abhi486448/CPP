#include<iostream>
using namespace std;

class Employee{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1);  //Declearation
        void getData(){
            cout<<"The value of a in "<<a<<endl;
            cout<<"The value of b in "<<b<<endl;
            cout<<"The value of c in "<<c<<endl;
            cout<<"The value of d in "<<d<<endl;
            cout<<"The value of e in "<<e<<endl;
        };

};
void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main(){
    Employee harry;
    harry.d=23;
    harry.e=125;
    harry.setData(5,7,9);
    harry.getData();
    return 0;
}