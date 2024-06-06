//ascii value convert to decimal and hexadecimal
#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=255;i++)
    {
        if((i>=48&&i<=57)||(i>=65&&i<=90)||(i>=97&&i<=122))
            printf("%c=%d=%x\n",i,i,i);
    }
    return 0;
}
