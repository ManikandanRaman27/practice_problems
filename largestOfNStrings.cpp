#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter Number Of Strings:";
    cin>>n;
    string str[n];
    cin.get();
    cout<<"Enter Strings:";
    for(i=0;i<n;i++)
    {
        getline(cin,str[i]);
    }
    for(i=0;i<n;i++)
    {
        cout<<str[i]<<endl;
    }
    return 0;
}
