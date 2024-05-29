#include <iostream>
#include <cmath>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Ans- Multiple Inheritance
    Q2. Which mode of Inheritance are you using?
    Ans- Public
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
    Ans- By Using Inheritance
*/
class SimpleCalculator
{
  int a;
  int b;

public:
  void set_number1(int x, int y)
  {
    a = x;
    b = y;
  }
  void sum()
  {
    cout << "Sum of " << a << " And " << b << " is: " << a + b << endl;
  }
  void sub()
  {
    cout << "Sum of " << a << " And " << b << " is: " << a - b << endl;
  }
  void multi()
  {
    cout << "Sum of " << a << " And " << b << " is: " << a * b << endl;
  }
  void divis()
  {
    cout << "Sum of " << a << " And " << b << " is: " << a / b << endl;
  }
};

class ScientificCalculator
{
  int p;
  int q;

public:
  void set_number2(int x, int y)
  {
    p = x;
    q = y;
  }
  void power()
  {
    cout << "Value of " << p << " Power " << q << " is: " << pow(p, q) + (1e-9) << endl;
  }
  void sqarot()
  {
    cout << "Value of Squar root of " << p << " is: " << sqrt(p) << endl;
  }
  void sine()
  {
    cout << "Value of Sin(" << p << ")" << " is: " << sin(p) << endl;
  }
  void cose()
  {
    cout << "Value of Cos(" << p << ")" << " is: " << cos(p) << endl;
  }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
  void Display()
  {
    set_number1(50, 5);
    sum();
    sub();
    multi();
    divis();
    set_number2(90, 7);
    power();
    sqarot();
    sine();
    cose();
  }
};

int
main()
{
  HybridCalculator S;
  S.Display();
  return 0;
}