/*printing pattern of upto rows
1
2 3
4 5 6 ...*/
#include<stdio.h>
int main()
{
    int n=5,i,j,value=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%3d ",value);
            value++;
        }
        printf("\n");
    }
    return 0;
}
