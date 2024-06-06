#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String:";
    cin>>str;
    printf("%s\n",str.c_str());
    char ch1,ch2;
    cout<<"Enter Chars to check:";
    cin>>ch1>>ch2;
    int i,j,x=str.length(),z=0,y=0;
    for(i=0;i<x;i++)
    {
        if(str[i]==ch1)
            y++;
        else if(str[i]==ch2)
            z++;
        else
            continue;
    }
    if(z==y)
        cout<<"True";
    else
        cout<<"False";
    return 0;
}

