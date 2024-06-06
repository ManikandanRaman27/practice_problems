#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter Value Of N:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"Sum Of First "<<n<<" Numbers is "<<sum<<endl;
    return 0;
}
