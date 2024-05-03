#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setDeta(void)
    {
        cout << "Enter Employee id : " << endl;
        cin >> id;
        count++;
    }
    void getDeta(void)
    {
        cout << "id of the employee is : " << id << " And this is Employee no." << count << endl;
    }
    static void getCount(void){
        // cout<<id;  throws an error
        cout<<"Value of count is "<<count<<endl;
    }
};
// count is static data member of clss Employee
int Employee::count = 1000; // Default value is 0
int main()
{
    Employee harry, rohan, lovish;
    // harry.id=1;
    // harry.count=1;  //cannot do this as id and count are private

    harry.setDeta();
    harry.getDeta();
    Employee::getCount();

    rohan.setDeta();
    rohan.getDeta();
    Employee::getCount();

    lovish.setDeta();
    lovish.getDeta();
    Employee::getCount();
    return 0;
}