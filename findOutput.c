//empty program for checking solutions for outputs
#include<stdio.h>
int main()
{
    int a=2,b=3,c=8,d=2,e=5;
    printf("%d\n",(8*3-4)+(5%5?3:-9)+5-20/10);
    printf("%d\n",2*3+(8/2)-2^2-(5+4));
    printf("%d\n",2^2);
    for(int i=1,j=1;i<=10;++i,++j)
    {
        if(i==3)
            break;
        else
        {
            if(j==4)
                break;
            else
            {
                printf("\n I am in loop, the values of I and J are:%d,%d",i,j);
            }
        }
    }
    return 0;
}
