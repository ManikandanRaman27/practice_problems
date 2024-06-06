#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,temp;
    cout<<"Enter Number:";
    cin>>n;
    for(i=0;i<15;i++)
    {
        if(n!=0)
        {
            temp=n%10;
            sum+=temp;
            n=n/10;
        }
    }
    cout<<"Sum of Digit:"<<sum<<endl;
    return 0;
}
