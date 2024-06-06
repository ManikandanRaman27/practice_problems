#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,cnt=0;
    cout<<"Enter Number To Check:";
    cin>>n;
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            cnt++;
            break;
        }
    }
    if(cnt==0)
    {
        cout<<"It is Prime"<<endl;
    }
    else
    {
        cout<<"Not a Prime"<<endl;
    }
    return 0;
}
