#include<stdio.h>
void quickSort(int array[],int start,int end);
int partition(int array[],int start,int end);

//array sorting using quick sort
void quickSort(int array[],int start,int end)
{
    if(end<=start)
        return;
    int pivot=partition(array[50],start,end);
    quickSort(array[50],start,pivot-1);
    quickSort(array[50],pivot+1,end);

}

int partition(int array[],int start,int end)
{
    int pivot=array[end];
    int j,temp,i=start-1;
    for(j=start;j<end;j++)
    {
        if(array[j]<pivot)
        {
            i++;
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
    i++;
    temp=array[i];
    array[i]=array[end];
    array[end]=temp;

    return i;
}

int main()
{
    int array[50],elements=0,j,num;
    printf("Enter elements:");
    //array input without define the size
    while(scanf("%d",&num)==1)
    {
        array[elements]=num;
        elements++;
        if(getchar()=='\n')
            break;
    }
    quickSort(array,0,elements);
    for(j=0;j<elements;j++)
    {
        printf("%d ",array[j]);
    }
    return 0;
}
