#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int r);
    void get_roll_number();
};
void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student::get_roll_number()
{
    cout << "The Roll Number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float math;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam::set_marks(float m1, float m2)
{
    math = m1;
    physics = m2;
}
void Exam::get_marks()
{
    cout << "The Marks of maths are: " << math << endl;
    cout << "The Marks of physics are: " << physics << endl;
}

class Result:public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Your Percentage is " << (math + physics) / 2 <<"%"<< endl;
    }
};

int main()
{
    /*
    Note
       If we are Inheriting B from A and C from B:[ A--->b--->c]
       1. A is the base class for B and B is base class for C
       2. A-->B-->C is calles Inheritence Path
    */
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(90.99, 99.90);
    harry.display();

    return 0;
}