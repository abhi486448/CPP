#include<iostream>
using namespace std;

class Simple{
    int data1 , data2;
    public:
       Simple(int a,int b=9){
        data1 = a;
        data2 = b;
       }
       void printData();
};

void Simple::printData(){
    cout<<"Value of data1 and data2 is "<<data1<<" and "<<data2<<endl;
}

int main(){
    Simple s(4,8),p(6);
    s.printData();
    p.printData();
    return 0;
}