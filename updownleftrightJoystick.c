#include<stdio.h>
#include<string.h>
int main()
{
    char UDLR[50];
    scanf("%s",UDLR);
    int len=strlen(UDLR),i,j,sum=0;
    for(i=0;i<len;i++)
    {
        if(UDLR[i]=='U')
            sum++;
        else if(UDLR[i]=='D')
            sum--;
        else if(UDLR[i]=='L')
            sum++;
        else if(UDLR[i]=='R')
            sum--;
    }
    if(sum==0)
        printf("True");
    else
        printf("False");
    printf("\n%d",sum);
    return 0;
}
