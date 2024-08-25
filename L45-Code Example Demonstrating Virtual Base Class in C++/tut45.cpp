#include<iostream>
using namespace std;

/*
Student --> test
Student --> Sports
Test --> result
Sports --> result
*/
class Student{
    protected:
       int roll_no;
    public:
       void set_number(int a){
        roll_no = a;
       }
       void print_number(void){
        cout<<"Your roll number is "<<roll_no<<endl;
       }
};

class Test : virtual public Student{
    protected:
       float maths, physics;
    public:
       void set_marks(float m1,float m2){
        maths = m1;
        physics = m2;
       }
       void print_marks(void){
        cout<<"Your maths number is "<<endl
            <<"Maths: "<<maths<<endl
            <<"Physics:  "<<physics<<endl;
       }

};

class Sports : virtual public Student{
    protected:
       float score;
    public:
       void set_scor(float sc){
        score = sc;
       }
       void print_score(void){
        cout<<"Your PT score is "<<score<<endl;
       }

};

class Result : public Test, public Sports{
    private:
       float total;
    public:
       void display(void){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your Total score is: "<<total<<endl;
       }
};

int main(){
    Result harry;
    harry.set_number(4200);
    harry.set_marks(78.9, 99.5);
    harry.set_scor(9);
    harry.display();
    return 0;
}