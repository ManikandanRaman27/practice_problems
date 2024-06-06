#include<iostream>
using namespace std;

void quicksort(int arr[],int first,int last);
int  partitions(int arr[],int first,int last);

void quicksort(int arr[],int first,int last)
{
    if(first<last)
    {
        int pivot=partitions(arr,first,last);
        quicksort(arr,first,pivot-1);
        quicksort(arr,pivot+1,last);
    }
}
int  partitions(int arr[],int first,int last)
{
    int pivot=arr[last];
    int i=first-1,j,temp;
    for(j=first;j<=last;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[last];
    arr[last]=arr[i+1];
    arr[i+1]=temp;
    return i+1;
}
