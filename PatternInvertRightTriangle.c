//pattern right triangle with letters
/*
A
A B
A B C
A B C D
A B C D E
A B C D E F
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x=65;
        for(j=1;j<=i;j++)
        {
            printf("%c ",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}
