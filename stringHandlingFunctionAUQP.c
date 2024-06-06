//basic string handling inbuilt keyword functions
#include<stdio.h>
#include<string.h>
char nameInput()
{
    char first[20],last[20],middle[20],fullname[60];
    printf("Enter First Name:");
    scanf("%s",&first);
    printf("Enter middle Name:");
    scanf("%s",&middle);
    printf("Enter last Name:");
    scanf("%s",&last);
    int i,value=0,x=strlen(first);
    printf("%d\n",x);
    for(i=0;i<strlen(first);i++)
    {
        fullname[value]=first[i];
        value++;
    }
    for(i=0;i<strlen(middle);i++)
    {
        fullname[value]=middle[i];
        value++;
    }
    for(i=0;i<strlen(last);i++)
    {
        fullname[value]=last[i];
        value++;
    }
    puts(fullname);
}
int main()
{
    nameInput();
    return 0;
}
