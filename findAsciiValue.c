#include<stdio.h>
int main()
{
    char chr;
    printf("Enter char to find integer value:");
    scanf("%c",&chr);
    int i;
    for(i=0;i<256;i++)
    {
        if(chr==i)
        {
            printf("integer value of %c is %d\n",chr,i);
            break;
        }
    }
    return 0;
}
