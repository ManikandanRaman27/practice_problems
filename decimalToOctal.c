//convert a decimal number to octal number
#include<stdio.h>
int main()
{
    int num,i,x[20],value=0;
    printf("Enter Number:");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        if(num!=0)
        {
            x[i]=num%8;
            value++;
            num=num/8;
        }
    }
    for(i=value-1;i>=0;i--)
    {
        printf("%d ",x[i]);
    }
    return 0;
}
