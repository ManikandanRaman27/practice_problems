#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,j,k,small;
    cout<<"Enter Array Size:";
    cin>>n;
    cout<<"Enter Elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        k=i;
        small=a[i];
        for(j=i+1;j<n;j++)
        {
            if(a[j]<small)
                small=a[j];
        }
        a[j]=a[k];
        a[k]=small;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
