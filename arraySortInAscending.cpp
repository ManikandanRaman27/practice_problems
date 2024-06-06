#include<iostream>
using namespace std;
int main()
{
    int a[10],i,j,n,temp;
    cout<<"Enter Array Size:";
    cin>>n;
    cout<<"Enter Array Elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<=a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

