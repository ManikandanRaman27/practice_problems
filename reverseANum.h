#include<stdio.h>
int reverseANum(int a);
int reverseANum(int a)
{
    int i,sum=0,temp,x;
    for(i=0;i<10;i++)
    {
        if(a!=0)
        {
            temp=a%10;
            x=sum*10;
            printf("%d ",x);
            sum=x+temp;
            a=a/10;
        }
    }
    return sum;
}
