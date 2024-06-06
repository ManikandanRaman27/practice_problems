#include<iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
    void display()
    {
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Age:";
        cin>>age;
        cout<<name<<"\n"<<age<<endl;
    }
};
int main()
{
    student obj;
    obj.display();
    return 0;
}
