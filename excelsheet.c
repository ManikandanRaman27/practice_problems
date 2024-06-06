#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char letter[10];
    scanf("%s",letter);
    int i,count=0,x=strlen(letter);
    for(i=0;i<x;i++)
    {
        count=count+(letter[i]-65+1)*pow(26,x-i-1);
    }
    printf("%d ",count);
    return 0;
}
