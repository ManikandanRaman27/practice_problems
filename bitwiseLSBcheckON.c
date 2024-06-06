//Write a C program to check Least Significant Bit (LSB) of a number is set or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    int lastbit=n%2;
    if(lastbit==1)
        printf("Yes");
    else
        printf("No");
    return 0;
}
