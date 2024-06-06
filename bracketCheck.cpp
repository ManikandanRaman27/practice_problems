#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="{}()(";
    string emp;
    int i,x=str.length();
    for(i=0;i<x;i++)
    {
        emp=emp+str[i];
        cout<<emp<<endl;
    }
    str.pop();;
    cout<<str;
    return 0;
}
