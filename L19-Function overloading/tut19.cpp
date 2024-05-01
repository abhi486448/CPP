#include<iostream>
using namespace std;

int sum(float a, int b){
    cout<<"Function with 2 Arguments"<<endl;
    return a + b;
}

int sum(int a, int b, int c){
    cout<<"Function with 3 Arguments"<<endl;
    return a+b+c;
}

int volume(float r, float h){
    return(3.12*r*r*h);
}

int volume(float a){
    return(a*a*a);
}

int main(){
    cout<<"Sum of 5 and 8 is "<<sum(5, 8)<<endl;

    cout<<"Sum of 5, 8 and 7 is "<<sum(5, 8, 7)<<endl;

    cout<<"Volume of cylender where r=7 and h=10 is "<<volume(7, 10)<<endl;

    cout<<"Volume of cube where a=6 is "<<volume(6)<<endl;
    return 0;
}