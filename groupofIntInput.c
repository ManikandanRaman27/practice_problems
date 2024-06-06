//directly input the array of integer elements like python. print its total sum.
#include<stdio.h>
int groupIntInput(int *array)
{
    int n=0,i,num;
       while(scanf("%d",&num)==1)
    {
        *array=num;
        array++;
        n++;
        if(getchar()=='\n')
            break;
    }
    return n;
}
int main()
{
    int n,i,array[50]={0},num,sum=0;
    printf("Enter integers:\n");
    n=groupIntInput(array);
    for(i=0;i<n;i++)
    {
        sum+=array[i];
        printf("%d ",array[i]);
    }
    printf("\n%d",sum);
    return 0;
}
