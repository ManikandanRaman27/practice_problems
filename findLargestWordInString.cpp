#include<iostream>
using namespace std;
int main()
{
    string str,str2[10];
    int i,value[10],val=0;
    cout<<"Enter String:";
    getline(cin,str);
    for(i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            value[val]=i;
            val++;
        }
    }
    for(i=0;i<=val;i++)
    {
        str2[i]=str.substr(0,value[i]);
    }
    for(i=0;i<=val;i++)
    {
        cout<<str[i]<<endl;
    }
    return 0;
}
