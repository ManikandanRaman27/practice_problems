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
            x[i]=num%16;
            value++;
            num=num/16;
        }
    }
    for(i=value-1;i>=0;i--)
    {
        if(x[i]==10)
            printf("A ");
        else if(x[i]==11)
            printf("B ");
        else if(x[i]==12)
            printf("C ");
        else if(x[i]==13)
            printf("D ");
        else if(x[i]==14)
            printf("E ");
        else if(x[i]==15)
            printf("F ");
        else
            printf("%d ",x[i]);
    }
    return 0;
}

