//input->C D c=d d=c
#include<iostream>
using namespace std;
int main()
{
    int c,d,temp;
    cout<<"Enter value of C:";
    cin>>c;
    cout<<"Enter value of D:";
    cin>>d;
    temp=c;
    c=d;
    d=temp;
    cout<<"Value of C:"<<c<<endl;
    cout<<"Value of D:"<<d<<endl;
    return 0;
}
