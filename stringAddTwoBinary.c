#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char main()
{
    char a[20],b[20],c[20];
    int i,x,y,z,m,value=0;
    printf("Enter Binary 1:");
    gets(a);
    printf("Enter Binary 2:");
    gets(b);
    x=strlen(a);
    y=strlen(b);
    m=x==y?printf("proceed\n"):printf("invalid\n");
    printf("%d\n",m);
    for(i=m-1;i>=0;i--)
    {
        if(a[i]==0&&b[i]==0)
            c[i]=0;
        else if(a[i]==0&&b[i]==1||a[i]==1&&b[i]==0)
            c[i]=1;
        else if(a[i]==1&&b[i]==1)
        {
            c[i]=0;
            c[i]++;
        }
    }
    for(i=0;i<m;i++)
    {
        printf("%s ",c[i]);
    }
    return 0;
}
