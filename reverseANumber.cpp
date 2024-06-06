#include<iostream>
using namespace std;
int main()
{
    int n,i,temp,rev=0;
    cout<<"Enter Number:";
    cin>>n;
    for(i=0;i<15;i++)
    {
        if(n!=0)
        {
            temp=n%10;
            rev=(rev*10)+temp;
            n=n/10;
        }
    }
    cout<<"Reversed Number:"<<rev<<endl;
    return 0;
}
