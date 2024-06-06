#include<iostream>
#include"quicksortAlgorithm.h"
using namespace std;
int checkPair(int arr[],int n,int start,int target)
{
    return ;
}
int main()
{
    int arr[]={0,1,2,3,4,5,2};
    int n=sizeof(arr)/sizeof(int);
    quicksort(arr,0,n-1);
    int target=5;
    int i,j,st,pa;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    for(i=0;i<n;i++)
    {
        st=arr[i];
        pa=target-st;
        checkPair(arr,n,i+1,target)

    }
    return 0;
}
