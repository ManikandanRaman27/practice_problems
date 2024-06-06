//convert binary to decimal
#include<stdio.h>
#include<math.h>
int main()
{
    long num;
    int i,temp,x,sum=0;
    printf("Enter Number:");
    scanf("%ld",&num);//1010
    for(i=0;i<100;i++)
    {
        if(num!=0)
        {
            temp=num%10;
            x=temp*(pow(2,i));
            sum+=x;
            num=num/10;
        }
    }
    printf("%d ",sum);
    return 0;
}
