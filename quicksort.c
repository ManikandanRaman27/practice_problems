#include<stdio.h>
void quicksort(int array[],int first,int end);
int  partition(int array[],int first,int end);

void quicksort(int array[],int first,int end)
{
    if(first<end)
    {
        int pivot=partition(array,first,end);
        quicksort(array,first,pivot-1);
        quicksort(array,pivot+1,end);
    }
}
int  partition(int array[],int first,int end)
{
    int pivot=array[end];
    int i=first-1,j,temp;
    for(j=first;j<=end;j++)
    {
        if(array[j]<pivot)
        {
            i++;
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
    temp=array[end];
    array[end]=array[i+1];
    array[i+1]=temp;
    return i+1;
}

/*int main()
{
    int array[]={0,5,4,6,3,7,2,8,9,1};
    quicksort(array,0,10-1);
    for(int i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}*/
