#include<iostream>
using namespace std;

// struct employee
// {
//     int eID;
//     char favChar;
//     float Salery;
// };

typedef struct employee
{
    int eID;
    char favChar;
    float Salery;
}ep;

union money
{
    int rice;
    char car;
    float pound;
};
int main(){
    // struct employee harry;
    // harry.eID = 1 ;
    // harry.favChar = 'c';
    // harry.Salery = 120000;

    // ep harry;
    // harry.eID = 1 ;
    // harry.favChar = 'c';
    // harry.Salery = 120000;

    // cout<<harry.eID<<endl;
    // cout<<harry.favChar<<endl;
    // cout<<harry.Salery<<endl;
    
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'w';
    // cout<<m1.rice;

    enum meal { brackfast, lunch, dinner};
    // cout<<brackfast;
    // cout<<lunch;
    // cout<<dinner;

    meal m1 = brackfast;
    cout<<m1;
    return 0;
}