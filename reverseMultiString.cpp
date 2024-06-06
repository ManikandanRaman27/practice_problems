#include<iostream>
#include<string>
using namespace std;
int main()
{
    string strmul,str[10],waste[10],mulreverse;
    int num,value=0,strsize,i;
    cout<<"Enter String:";
    getline(cin,strmul);
    strsize=strmul.length();
    for(i=0;i<strsize;i++)
    {
        if(strmul[i]==' ')
        {
            value++;
        }
    }
    waste[0]=strmul;
    for(i=0;i<=value;i++)
    {
        num=waste[i].find(" ");
        str[i]=waste[i].substr(0,num);
        cout<<str[i]<<endl;
        waste[i+1]=waste[i].substr(num+1);
    }
    for(i=value;i>=0;i--)
    {
        mulreverse=mulreverse+str[i]+" ";
    }
    cout<<mulreverse<<endl;
    return 0;
}
