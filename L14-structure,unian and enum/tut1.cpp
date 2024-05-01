#include<iostream>
using namespace std;

struct empolees
{
    int emId;
    char emClass;
    float emFee;
};
union money
{
    int car;
    float rat;
    char bana;
};
int main(){
    struct empolees rana;
    rana.emId=12;
    rana.emClass='A';
    rana.emFee=120000;
    cout<<"Rana's emId is "<<rana.emId<<endl;
    cout<<"Rana's emClass is "<<rana.emClass<<endl;
    cout<<"Rana's emFee is "<<rana.emFee<<endl;

    union money e1;
    e1.car=500;
    cout<<"Price of car is "<<e1.car<<endl;
    e1.rat=56.56;
    cout<<"Price of car is "<<e1.car<<endl;
    cout<<"Price of rat is "<<e1.rat<<endl;

    enum meal{brackfast, lunch, diner};

    meal m1=brackfast;
    meal m2=lunch;
    cout<<m1<<endl;
    cout<<(m2==1)<<endl;


    return 0;
}