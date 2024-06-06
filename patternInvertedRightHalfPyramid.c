//pattern inverted right half pyramid
/*
 * * * * * *
 * * * * *
 * * * *
 * * *
 * *
 *
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
