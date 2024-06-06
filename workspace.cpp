#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=100;i>=1;i--)
    {
        if(i%10==0)
        {
            printf("\n");
            printf("%5d",i);
        }
        printf("%5d",i);

    }
    return 0;
}
