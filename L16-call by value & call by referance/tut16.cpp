#include<iostream>
using namespace std;

// call by argument
void swape(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}
// call by refrance
void swapeby(int* x, int* y){
    int temp= *x;
    *x=*y;
    *y=temp;
}
// call by refrance c++ refrance verable
void swaprefver(int &x, int &y){
    int temp= x;
    x=y;
    y=temp;
}

int main(){
    int a = 4, b=7;
    cout<<"a: "<<a<<"b: "<<b<<endl;

    swape(a,b);
    cout<<"a: "<<a<<"b: "<<b<<endl;

    swapeby(&a,&b);
    cout<<"a: "<<a<<"b: "<<b<<endl;

    swaprefver(a,b);
    cout<<"a: "<<a<<"b: "<<b<<endl;

    return 0;
}