#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<100;i++)
    {
        int value=1;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                value++;
            }
        }
        if(value-1==2)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
