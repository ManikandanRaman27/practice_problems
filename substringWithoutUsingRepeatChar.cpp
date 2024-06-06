#include<iostream>
#include<string>
using namespace std;
int checkRepeat(string a);
int main()
{
    string a="pwwsrw",str;
    int i,x;
    for(i=0;i<a.length();)
    {
        str=a.substr(0,i+2);
        x=checkRepeat(str);
        if(x==1)
        {

        }
        else
        {

        }
    }
    return 0;
}
int checkRepeat(string a)
{
    int i,x=0;
    char y;
    y=a[0];
    for(i=1;i<a.length();i++)
    {
        if(y==a[i])
        {
            x++;
            break;
        }
    }
    if(x==0)
        return 1;
    else
        return 0;
}
