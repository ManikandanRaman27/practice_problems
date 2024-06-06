#include<iostream>
using namespace std;
int main()
{
    string a;
    int b[10],i,value=0;
    cout<<"Enter String:";
    getline(cin,a);
    for(i=0;i<a.length();i++)
    {
        if(a[i-1]==' ')
        {
            b[value]=i-1;
            value++;
        }
    }
    for(i=0;i<value;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}
