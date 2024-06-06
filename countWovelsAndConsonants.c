//counting wovels and consonants on a string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    char wovel[]={'a','e','i','o','u','A','E','I','O','U'};
    int i,x,j,wovelCount=0,Consonant;
    printf("Enter String:");
    scanf("%s",&str);
    x=strlen(str);
    for(i=0;i<x;i++)
    {
        for(j=0;j<10;j++)
        {
            if(str[i]==wovel[j])
            {
                wovelCount++;
            }
        }
    }
    Consonant=x-wovelCount;
    printf("Wovel=%d\n",wovelCount);
    printf("Consonant=%d\n",Consonant);
    return 0;
}
