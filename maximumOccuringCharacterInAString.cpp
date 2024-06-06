#include<iostream>
using namespace std;
int main()
{
    string s;
    char temp;
    int i,j,counting=0;
    cout<<"Enter String:";
    cin>>s;
    x=s.length();
    for(i=0;i<x;i++)
    {
        temp=s[i];
        for(j=0;j<x;j++)
        {
            if(temp==s[j])
            {
                counting++;
            }
        }
    }
    return 0;
}
