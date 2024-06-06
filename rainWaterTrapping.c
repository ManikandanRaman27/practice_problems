#include<stdio.h>
int main()
{
    int container[]={3,2,1,0,0},n,i,j,k,count=0;
    n=sizeof(container)/sizeof(int);
    for(i=0;i<n;i++)
    {
        for(j=i+1;(j<n&&container[j]<=container[i]);container[j]++)
        {
            if(container[j]>container[i])
            {
                count++;
            }
        }
    }
    return 0;
}
