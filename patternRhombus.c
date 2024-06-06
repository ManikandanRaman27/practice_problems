//pattern rhombus upto n rows
/*
 * * * * *
  * * * * *
   * * * * *
    * * * * *
     * * * * *
*/
#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    printf("Enter rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
