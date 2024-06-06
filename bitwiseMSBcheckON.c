//Write a C program to check Most Significant Bit (MSB) of a number is set or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    if(n<0)
        printf("MSB is 1");
    else
        printf("No");
    /*
    int mostbit=n<<1;

    if(mostbit&n==1)
        printf("Yes");
    else
        printf("No");
    */
    return 0;
}

