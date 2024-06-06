#include<stdio.h>
#include<math.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int bitsrev[20],i=0,x,result=0;
    while(n!=0)
    {
        bitsrev[i]=n%2;
        i++;
        n=n/2;
    }
    bitsrev[k-1]=!bitsrev[k-1];
    for(x=0;x<i;x++)
        printf("%d ",bitsrev[x]);
    for(x=0;x<i;x++)
    {
        result+=(bitsrev[x]*pow(2,x));
    }
    printf("\n%d",result);
    return 0;
}
