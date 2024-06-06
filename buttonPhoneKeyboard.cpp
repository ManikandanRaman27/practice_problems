#include<iostream>
using namespace std;
int main()
{
    int i,x,num,value=0,c[20];
    string str,a[20],b[20];
    cout<<"Enter Numbers With Single Space:";
    getline(cin,str);
    x=str.length();
    for(i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            value++;
        }
    }
    a[0]=str;
    for(i=0;i<=value;i++)
    {
        num=a[i].find(" ");
        b[i]=a[i].substr(0,num);
        cout<<b[i]<<endl;
        a[i+1]=a[i].substr(num+1);
    }

    return 0;
}
