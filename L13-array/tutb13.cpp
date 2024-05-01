#include<iostream>

using namespace std;

int main(){
    int array[4];
    array[0]=67;
    array[1]=690;
    array[2]=987;
    array[3]=984;

    int i=0,j=0;

    while(i<=3){
        cout<<"value of"<<i<<"is : "<<array[i]<<endl;
        i++;
    }

    do{
        cout<<"value of"<<i<<"is : "<<array[j]<<endl;
        j++;
    }while(j<=3);
    return 0;
}