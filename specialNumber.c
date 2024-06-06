#include<stdio.h>
int main()
{
    int n,i,x;
    scanf("%d",&n);//8
    for(i=1;i<=n;i++)
    {
        int sum1=0,sum2=0;
        x=i-1;
        while(x>0)//1+2+3+4+5=15
        {

            sum1+=x;
            x--;
        }
        x=i+1;
        while(x<=n)//7+8=15
        {
            sum2+=x;
            x++;
        }
        if(sum1==sum2)//15==15
            printf("%d",i);//6
    }
    return 0;
}
