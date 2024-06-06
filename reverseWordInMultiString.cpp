#include<iostream>
#include<string.h>
using namespace std;
string reverseAString(string a);
int main()
{
    string multiWordStr,str[10],str2[10],op;
    int i,x,value=0,num;
    cout<<"Enter String:";
    getline(cin,multiWordStr);
    x=multiWordStr.length();
    for(i=0;i<x;i++)
    {
        if(multiWordStr[i]==' ')
        {
            value++;
        }
    }
    str2[0]=multiWordStr;
    for(i=0;i<=value;i++)
    {
        num=str2[i].find(" ");
        str[i]=str2[i].substr(0,num);
        cout<<str[i]<<endl;
        str2[i+1]=str2[i].substr(num+1);
    }
    for(i=0;i<=value;i++)
    {
        str2[i]=reverseAString(str[i]);
        cout<<str2[i]<<endl;
    }
    for(i=0;i<=value;i++)
    {
        op=op+(str2[i]+" ");
    }
    cout<<op<<endl;
    return 0;
}
string reverseAString(string a)
{
    int i;
    string b;
    for(i=a.length()-1;i>=0;i--)
    {
        b=b+a[i];
    }
    return b;
}
