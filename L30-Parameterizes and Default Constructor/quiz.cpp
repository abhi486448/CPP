#include<iostream>
#include<cmath>
using namespace std;
/*Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points

use these examples to check your code:
Distance between (1, 1) and (1, 1) is 0
Distance between (0, 1) and (0, 6) is 5
Distance between (1, 0) and (70, 0) is 69

   ________________
  /(X2-x1)²+(y2-y1)²
  sqrt() = for square root
  pow()  = for pow

*/
class Distance{
    float x, y, dis;
    public:
       friend float Dist(Distance o1, Distance o2);
       
       void Points(int n1, int n2){
        x = n1;
        y = n2;
       }
};

float Dist(Distance o1, Distance o2){
    Distance o3;
    o3.Points((o2.x - o1.x),(o2.y - o1.y));
    o3.Points(pow(o3.x ,2),pow(o3.y,2));
    o3.dis = sqrt(o3.x + o3.y);
    return(o3.dis);
}

int main(){
    Distance o1,o2,o3;
    o1.Points(1,1);
    o2.Points(1,1);

    int result = Dist(o1,o2);
    cout<<result<<endl;

    o1.Points(0,1);
    o2.Points(0,6);

    result = Dist(o1,o2);
    cout<<result<<endl;

    o1.Points(1,0);
    o2.Points(70,0);

    result = Dist(o1,o2);
    cout<<result<<endl;
    return 0;
}