//nc0,nc1,nc2,...
//pascal triangle using combinations
/*
                       1
                    1     1
                 1     2     1
              1     3     3     1
           1     4     6     4     1
        1     5    10    10     5     1
     1     6    15    20    15     6     1
*/
#include<stdio.h>
int combination(int n,int k);
int combination(int n,int k)
{
    int temp=k;
    int i,x=1,y=1;
    for(i=n;temp;i--)
    {
        x*=i;
        temp--;
    }
    for(;k>0;k--)
    {
        y*=k;
    }
    return x/y;
}
int main()
{
    int n,i,j,x;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("   ");
        }
        for(j=0;j<=i;j++)
        {
            x=combination(i,j);
            printf("%6d",x);
        }
        printf("\n");
    }
    return 0;
}
