#include<iostream>
#include<string>
using namespace std;
int checkRepeat(string a);
int main()
{
    string s="pwwkew",b[100],noRepeat[100],str;
    int i,j,x,y,big,ch,value=0,value2=0,num[100];
    x=s.length();
    for(i=0;i<x;i++)
    {
        for(j=i;j<x;j++)
        {
            b[value]=s.substr(i,j+1);
            ch=checkRepeat(b[value]);
            if(ch==1)
            {
                noRepeat[value2]=b[value];
                value2++;
            }
            value++;
        }
    }
    for(i=0;i<value2;i++)
    {
        num[i]=noRepeat[i].length();
    }
    big=num[0];
    str=noRepeat[0];
    for(i=1;i<value2;i++)
    {
        if(big<num[i])
        {
            big=num[i];
            str=noRepeat[i];
        }
    }
    cout<<big<<endl;
    cout<<str<<endl;
    return 0;
}
int checkRepeat(string a)
{
    char y;
    int w,i,j=0,x;
    w=a.length();
    for(x=0;x<w;x++)
    {
        y=a[x];
        for(i=x+1;i<w;i++)
        {
            if(y==a[i])
            {
                j++;
            }
        }
    }
    if(j==0)
        return 1;
    else
        return 0;
}
