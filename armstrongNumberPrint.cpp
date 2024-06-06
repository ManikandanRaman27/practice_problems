#include<iostream>
using namespace std;
int main()
{
    int i,n,temp,cube;
    for(i=100;i<1000;i++)
    {
        n=i;
        int sum=0;
        while(n!=0)
        {
            temp=n%10;
            cube=temp*temp*temp;
            sum+=cube;
            n=n/10;
        }
        if(sum==i)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
