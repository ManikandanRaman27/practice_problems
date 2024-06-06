#include<iostream>
using namespace std;
int main()
{
    string arra[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"},s;
    int i,x;
    cout<<"Enter string to Search:";
    cin>>s;
    for(i=0;i>=0;i++)
    {
        if(s==arra[i])
        {
            cout<<i+1<<endl;
        }
    }
    return 0;
}
