//difficult pattern
/*
    * A
   ** BC
  *** CDE
 **** DEFG
***** EFGHI
54321 13579
 4321 3579
  321 579
   21 79
    1 9

*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter N:");
    scanf("%d",&n);
    int ch=65;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-1;j++)
            printf(" ");
        for(j=0;j<=i;j++)
            printf("*");

        printf(" ");

        for(j=0;j<=i;j++)
            printf("%c",ch++);
        ch-=i;
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        int num=n-i;
        int num2=(2*i)+1;
        for(j=0;j<i;j++)
            printf(" ");
        for(j=n-1;j>=i;j--)
            printf("%d",num--);

        printf(" ");

        for(j=i;j<n;j++)
        {
            printf("%d",num2);
            num2+=2;
        }
        printf("\n");
    }

    return 0;
}
