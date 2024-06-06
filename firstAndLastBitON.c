//check whether the first and last bit is only on
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int firstbit,lastbit,cnt=0,x[50],temp;
    lastbit=1;
    firstbit=n%2;
    while(n!=0)
    {
        temp=n%2;
        x[i]=temp;
        if(x[i]==1)
            cnt++;
        i++;
        n=n/2;
    }
    if(cnt==2)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
