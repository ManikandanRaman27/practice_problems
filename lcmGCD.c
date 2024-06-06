//finding lcm and gcd of two numbers using factor saving method
#include<stdio.h>
int main()
{
    int n1,n2,i,j,a[100],b[100],c[100],num1=1,num2=1,num=1,GCD,LCM;
    printf("Enter Two Number:");
    scanf("%d%d",&n1,&n2);
    printf("Factors of %d:",n1);
    for(i=1;i<=n1;i++)
    {
        if(n1%i==0)
        {
            a[num1]=i;
            printf("%d ",a[num1]);
            num1++;
        }
    }
    printf("\n");
    printf("Factors of %d:",n2);
    for(i=1;i<=n2;i++)
    {
        if(n2%i==0)
        {
            b[num2]=i;
            printf("%d ",b[num2]);
            num2++;
        }
    }
    printf("\n");
    for(i=1;i<num1;i++)
    {
        for(j=1;j<num2;j++)
        {
            if(a[i]==b[j])
            {
                c[num]=a[i];
                num++;
                break;
            }
        }
    }
    GCD=c[num-1];
    printf("GCD=%d\n",GCD);
    LCM=(n1*n2)/GCD;
    printf("LCM=%d\n",LCM);
    return 0;
}
