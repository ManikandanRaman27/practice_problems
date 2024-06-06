#include<stdio.h>
int removeElement(int a[],int n,int x);
int main()
{
    /*printf("David says,\"Programming is fun!\" \n");
    printf("**Conditions apply,\"Offers valid until tomorrow\" \n");
    printf("C:\\My computer\\My folder\n");
    printf("D:/My documents/My file\n");
    printf("\\\\\\\\Today is holiday\\\\\\\\\n");
    printf("This is a triple quoted string \"\"\"This month has 30 days\"\"\" \n");*/
    int a[20],n,i,j,x,value;
    printf("Enter the Array size:");
    scanf("%d",&n);
    printf("Enter Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    value=n;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
             if(a[i]==a[j])
             {
                x=j;
                removeElement(a,n,x);
                value--;
                break;
             }
        }
    }
    for(i=0;i<=value;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
int removeElement(int a[],int n,int x)
{
    int temp;
    for(;x<n;x++)
    {
        temp=a[x+1];
        a[x]=temp;
    }
}
