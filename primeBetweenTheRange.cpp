#include<iostream>
using namespace std;
int main()
{
    int n1,n2,i;
    cout<<"Enter Range Of Start And End:";
    cin>>n1>>n2;
    for(i=n1;i<=n2;i++)
    {
        for(j=2;(j*j)<=n2;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
    }
    return 0;
}
