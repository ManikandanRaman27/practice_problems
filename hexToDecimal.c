//convert hexadecimal to decimal of two hex numbers and subtract. then print in hex and decimal
#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter a Hexadecimal Number:");
    scanf("%x",&a);
    printf("%d\n",a);
    printf("Enter Second Hex Number:");
    scanf("%x",&b);
    printf("%d\n",b);
    printf("%x\n",a-b);
    return 0;
}
