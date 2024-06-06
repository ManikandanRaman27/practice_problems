#include<iostream>
using namespace std;
template<class t>
void swaping(t &a,t &b)
{
    t temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=10,b=20;
    cout<<"Before Swapping:"<<a<<" "<<b<<endl;
    swaping(a,b);
    cout<<"after Swapping:"<<a<<" "<<b<<endl;
    char x='A',y='B';
    cout<<"Before Swapping:"<<x<<" "<<y<<endl;
    swaping(x,y);
    cout<<"Before Swapping:"<<x<<" "<<y<<endl;
    string c="hello",d="world";
    cout<<"Before Swapping:"<<c<<" "<<d<<endl;
    swaping(c,d);
    cout<<"Before Swapping:"<<c<<" "<<d<<endl;
    return 0;
}

