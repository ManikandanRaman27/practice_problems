#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int age;
public:
    void display()
    {

        cout<<name<<"\n"<<age<<endl;
    }
};
int main()
{
    student obj;
    cout<<"Enter Name:";
          cin>>obj.name;
        cout<<"Enter Age:";
        cin>>obj.age;
    obj.display();
    return 0;
}
