//print pattern diamond
#include<stdio.h>
int main()
{
    int n=5,i,j;
    for(i=1;i<=(2*n)-i;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("  ");
        }
        for(j=i;j<=2*n-i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
