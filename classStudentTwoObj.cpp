#include<iostream>
#include<string>
using namespace std;
class studentTwo
{
public:
    string address,name,phone_no;
    int roll_no;
public:
     void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll Number:"<<roll_no<<endl;
        cout<<"Phone Number:"<<phone_no<<endl;
        cout<<"Address:"<<address<<endl;
    }
};
int main()
{
    studentTwo obj1,obj2;
    cout<<"Enter Name:";
    getline(cin,obj1.name);
    cout<<"Enter Roll Number:";
    cin>>obj1.roll_no;
    cout<<"Enter Phone Number:";
    cin>>obj1.phone_no;
    fflush(stdin);
    cout<<"Enter Address:";
    getline(cin,obj1.address);

    cout<<"Enter Name:";
    getline(cin,obj2.name);
    cout<<"Enter Roll Number:";
    cin>>obj2.roll_no;
    cout<<"Enter Phone Number:";
    cin>>obj2.phone_no;
    fflush(stdin);
    cout<<"Enter Address:";
    getline(cin,obj2.address);

    obj1.display();
    obj2.display();
    return 0;
}
