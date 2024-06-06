//interchange right 4 bits to left 4 bits
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x,temp,value=0,array[50],result=0;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=7;i>=0;i--)
    {
        array[value]=(n>>i)&1;
        value++;
    }
    x=value/2;
    for(i=0;i<value;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for(i=0;i<value/2;i++)
    {
        temp=array[i];
        array[i]=array[x];
        array[x]=temp;
        x++;
    }
    x=value;
    for(i=0;i<value;i++)
    {
        printf("%d ",array[i]);
    }
    for(i=0;i<value;i++)
    {
        result+=(array[i]*pow(2,x-1));
        x--;
    }
    printf("\n%d",result);
    return 0;
}
//right shift to k bits
/*
#include <stdio.h>
int main() {
    int n, k;
    printf("Enter number:");
    scanf("%d", &n);
    printf("Enter bits to shift:");
    scanf("%d", &k);
    if (k < 0) {
        printf("Invalid position. Position should be non-negative.\n");
        return 1;
    }

    int mask = n << k;
    printf("%d", mask);
    return 0;
}*/


