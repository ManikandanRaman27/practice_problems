#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter Size:";
    cin>>n;
    int elements[n];
    cout<<"Enter Elements:";
    for(i=0; i<n; i++)
    {
        cin>>elements[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            {
                cout<<elements[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
