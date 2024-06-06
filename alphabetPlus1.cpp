#include<iostream>
using namespace std;
int main()
{
    string str,str2,str3;
    int i;
    cout<<"Enter String:";
    cin>>str;
    for(i=0;i<str.length();i++)
        str2[i]=int(str[i])+1;
    for(i=0;i<str.length();i++)
    {
        str3+=str2[i];
    }
    cout<<str3<<endl;
    return 0;
}
