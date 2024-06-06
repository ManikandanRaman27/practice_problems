//convert binary to hexadecimal
#include<stdio.h>
#include<math.h>
int main()
{
    long num;
    int i,j,temp,temp2,a,x[10],count=0;
    printf("Enter Number(0's and 1's):");
    scanf("%ld",&num);
    for(i=0;i<15;i++)
    {
        if(num!=0)
        {
            int sum=0;
            temp=num%10000;
            for(j=0;j<4;j++)
            {
                temp2=temp%10;
                a=temp2*(pow(2,j));
                sum+=a;
                temp=temp/10;
            }
            x[i]=sum;
            count++;
            num=num/10000;
        }
    }
    for(i=count-1;i>=0;i--)
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
