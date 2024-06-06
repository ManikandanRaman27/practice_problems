#include<iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll_no;
public:
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll Number:"<<roll_no<<endl;
    }
};
int main()
{
    Student obj;
    obj.name="John";
    obj.roll_no=2;
    obj.display();
    cout<<"Name:"<<obj.name<<endl;
    cout<<"Roll Number:"<<obj.roll_no<<endl;
    return 0;
}
