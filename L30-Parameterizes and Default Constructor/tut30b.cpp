#include<iostream>
using namespace std;
class Point{
    int x, y;
    public:
       Point(int a, int b){
        x = a;
        y = b;
       }
       void displayPoint(){
        cout<<"The point is ( "<<x<<" , "<<y<<" )"<<endl;
       }
};

int main(){
    Point p(1,3);
    Point q(4,6);

    p.displayPoint();
    q.displayPoint();
    return 0;
}