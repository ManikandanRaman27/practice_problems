#include<iostream>
using namespace std;
void reversedArrayInPlace(int *a,int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        swap(a[i],a[n-1-i]);
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n,i;
    cout<<"Enter Size:";
    cin>>n;
    int elements[n];
    cout<<"Enter Elements:";
    for(i=0; i<n; i++)
    {
        cin>>elements[i];
    }
    reversedArrayInPlace(elements,n);
    return 0;
}
