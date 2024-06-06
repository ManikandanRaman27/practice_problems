/*
1    5      //9-7,7-5,5-3,3-1
 2  4
   3
 2  4
1    5
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,j,n,emp;
    fflush(stdin);
    cout<<"Enter Odd Length of String : ";
    getline(cin,str);
    n=str.length();
    emp=n-2;
    for(i=0;i<str.length();i++,n--)
    {
        if(i>str.length()/2)
        {
            for(j=str.length()-i-1;j>0;j--)
            {
                cout<<" ";
            }
        }
        else
        {
            for(j=0;j<i;j++)
            {
                cout<<" ";
            }
        }
        i<=n?cout<<str[i]:cout<<str[n-1];
        for(j=0;j<abs(emp);j++)
            cout<<" ";
        if(i!=n-1)
            emp-=2;
        if(i!=n-1)
            i>n?cout<<str[i]:cout<<str[n-1];


        cout<<endl;
    }
    return 0;
}
