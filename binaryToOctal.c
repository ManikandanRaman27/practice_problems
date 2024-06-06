//convert binary to octal
#include<stdio.h>
#include<math.h>
int main()
{
    long num;
    int i,j,temp,temp2,x,a[20],count=0;
    printf("Enter Number(0's & 1's):");
    scanf("%ld",&num);
    for(i=0;i<15;i++)
    {
        if(num!=0)
        {
            temp=num%1000;
            int sum=0;
            for(j=0;j<3;j++)
            {
                temp2=temp%10;
                x=temp2*(pow(2,j));
                sum+=x;
                temp=temp/10;
            }
            a[i]=sum;
            count++;
            num=num/1000;
        }
    }
    for(i=count-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
