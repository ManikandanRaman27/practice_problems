#include<stdio.h>
int main()
{
    int i,j,n,a[20],lar,seclar,val=0;
    printf("Enter Array Size:");
    scanf("%d",&n);
    printf("Enter Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    lar=a[0];
    for(i=1;i<n;i++)
    {
        if(lar<a[i])
            lar=a[i];
    }
    seclar=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]!=lar)
        {
            if(seclar<a[i]&&seclar<lar)
                seclar=a[i];
        }
    }
    for(i=1;i<n-1;i++)
    {
        for(j=a[i]+1;j<=seclar;j++)
        {
            val++;
        }
    }
    printf("%d\n",val);
    return 0;
}
