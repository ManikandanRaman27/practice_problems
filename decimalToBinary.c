//convert a decimal number to binary bits
#include<stdio.h>
int main()
{
    int num,i,x[20],value=0;
    printf("Enter Number:");
    scanf("%d",&num);
    for(i=0;i<100;i++)
    {
        if(num!=0)
        {
            x[i]=num%2;
            value++;
            num=num/2;
        }
    }
    for(i=value-1;i>=0;i--)
    {
        printf("%d ",x[i]);
    }
    return 0;
}
