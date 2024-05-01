#include<iostream>
using namespace std;

int Fact(int a){
    if(a<=1){
        return 1;
    }
    return a * Fact(a-1);
}

int fib(int n){
    
    if(n==1){
        return 0;
    }else if(n==2){
        return 1;
    }else if(n>=3){
        return fib(n-1)+fib(n-2);
    }
    
}
int main(){
    // int a;
    // cout<<"Enter Value of a :"<<endl;
    // cin>>a;

    // cout<<"Factorial of "<<a<<" is "<<Fact(a)<<endl;

    // int n;
    // cout<<"ENter no. of term "<<endl;
    // cin>>n;
    for(int n=1; n<=20;n++){
         cout<<"Fibonarcc no. of term "<<n<<" is "<<fib(n)<<endl;
    }

    return 0;
}