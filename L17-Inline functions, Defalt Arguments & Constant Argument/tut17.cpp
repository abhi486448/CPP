#include<iostream>
using namespace std;

inline int product(int a, int b){
    //Not recommended to use below line with inline function
    //static int c=0;  This Exicute only once
    //c=c+1;  //Next time this fuction is run, the value of c will be retained
    return a*b;
}

float moneyRecovired(int correntMoney, float factor = 1.04){
    return correntMoney*factor;
}

// int strlen(const char *p){

// }

int main(){
    // int a,b;

    // cout<<"Enter Values of a and b: "<<endl;
    // cin>>a>>b;

    // cout<<"Product of a and b is: "<<product(a,b)<<endl;
    // cout<<"Product of a and b is: "<<product(a,b)<<endl;
    // cout<<"Product of a and b is: "<<product(a,b)<<endl;
    // cout<<"Product of a and b is: "<<product(a,b)<<endl;
    // cout<<"Product of a and b is: "<<product(a,b)<<endl;
    // cout<<"Product of a and b is: "<<product(a,b)<<endl;

    int money = 100000;

    cout<<"If you have "<<money<<" Rs in your bank, you will recive "<<moneyRecovired(money)<<endl;

    cout<<"In VIP If you have "<<money<<" Rs in your bank, you will recive "<<moneyRecovired(money,1.1)<<endl;
    return 0;
}