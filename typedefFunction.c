#include<stdio.h>
#include<stdlib.h>
int main()
{
    typedef int mine;
    typedef char yours;
    mine a=5;
    yours b[50]="hi hello";
    printf("%d\n",a);
    puts(b);
    return 0;
}
