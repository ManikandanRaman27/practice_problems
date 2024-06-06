#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String:";
    cin>>str;
    int i,j,x=str.length();
    char temp;
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    cout<<str;
    return 0;
}

