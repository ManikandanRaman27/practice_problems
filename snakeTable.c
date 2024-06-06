#include<stdio.h>
int increase();
int decrease();
int increase(int i)
{
    int x=1;
    for(;x<=10;x++)
    {
        printf("%4d",i);
        i++;
    }
    return i;
}
int decrease(int i)
{
    int x=1;
    for(;x<=10;x++)
    {
        printf("%4d",i);
        i--;
    }
    return i;
}
int main()
{
    int i;
    for(i=100;i>=1;i--)
    {
        if(i%20==0)
        {
            decrease(i);
            printf("\n");
        }
        else if(i%20==1)
        {
            increase(i);
            printf("\n");
        }
    }
    return 0;
}
