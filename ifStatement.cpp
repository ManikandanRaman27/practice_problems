#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter A&B:";
    cin>>a>>b;
    /*cout<<"Enter B:";
    cin>>b;*/
    if(a>b)
    {
        cout<<"A is greater.value is "<<a<<endl;
    }
    else if(a<b)
    {
        cout<<"B is greater.value is "<<b<<endl;
    }
    else
    {
        cout<<"Both are equal "<<a<<" value"<<endl;
    }
    return 0;
}
