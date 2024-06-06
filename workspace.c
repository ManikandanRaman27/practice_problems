#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    /*int x,y,i,j;
    char a[50],temp;
    gets(a);
    printf("%s\n",a);
    y=strlen(a);
    printf("%d\n",y);
    for(i=0;i<y;i++)
    {
        for(j=0;j<256;j++)
        {
            if(a[i]==j)
            {
                printf("%x ",j);
            }
        }
    }*/
    /*printf("\n");
    printf("%f\n",(pow(2,30)/2000.0));
    int a,b,c;
    printf("Enter First Hex Number:");
    scanf("%x",&a);
     printf("Enter second Hex Number:");
    scanf("%x",&b);
    printf("%d\n",a);
    printf("%d\n",b);
    c=b-a;
    printf("%x=%d\n",c,c);
    printf("%d\n",c/1024);*/
    int g=pow(2,48)/pow(2,40);
    printf("%ld=%x\n",g,g);
    return 0;
}
