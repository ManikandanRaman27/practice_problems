/*A cashier has currency notes of denominations 10,50,100. if the amount to be
withdrawn is input through the keyboard in hundreds,find the total number of
currency notes of each denomination the cashier will have to give the withdrawer.*/
#include<iostream>
using namespace std;
int main()
{
    int amount,i,temp,x,a[]={2000,500,200,100,50,20,10,5,2,1};
    x=sizeof(a)/sizeof(int);
    cout<<x<<endl;
    cout<<"Enter Amount:";
    cin>>amount;
    for(i=0;i<x;i++)
    {
        temp=amount/a[i];
        cout<<"notes in "<<a[i]<<" is "<<temp<<endl;
        amount=amount%a[i];
    }
    return 0;
}
