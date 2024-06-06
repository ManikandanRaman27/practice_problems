#include<stdio.h>
int main()
{
    int val=12;
    int *iptr=&val;
    int *pptr=&iptr;
    printf("%d\n",&val);
    printf("%d\n",iptr);
    printf("%d\n",*iptr);
    printf("%d\n",&iptr);
    printf("%d\n",pptr);
    printf("%d\n",*pptr);
    printf("%d\n",&pptr);

    return 0;
}
