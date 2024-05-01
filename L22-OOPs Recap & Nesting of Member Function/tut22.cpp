// OOps - Classes and objects

// C++ --> initilally called --> C with classes by stroustroup
// class --> extension of Structure(in C)
// Structure had laimitations
//       - members are public
//       - No methods
// classes  --> structure + more
// classes --> can have mathods + properties
// classes --> can make few members as private & few as public
// structures in c++ are typedefed
// you can declear objects along with the class decleration like this:
/*class Employee{
      class definition
  }harry, rohan, lovish;*/
// harry.salary = 8 makes no sense if salary is private

// Nesting of member function

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void once_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary Number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::once_compliment(void){
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i)= '1';
        }
        else if(s.at(i)=='1'){
            s.at(i)='0';
        }
    }
    
}

void binary ::display(void){
    cout<<"Display your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
    
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.once_compliment();
    b.display();

    return 0;
}