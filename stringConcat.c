//string concatenation without using inbuilt
#include<stdio.h>
#include<string.h>
char main()
{
    char sen[100];
    scanf("%[^\n]s", sen);//basic string input
    printf("Output : %s", sen);
    char a[20],b[20];
    int i,x,y,z,value=0;
    printf("Enter String 1:");
    gets(a);
    printf("Enter String 2:");
    gets(b);
    x=strlen(a);
    y=strlen(b);
    z=x+y;
    char c[z];
    for(i=0;i<x;i++)
    {
        c[i]=a[i];
    }
    printf("%d\n",i);
    for(;i<z;i++)
    {
        c[i]=b[value];
        value++;
    }
    puts(c);
    return 0;
}

