#include<iostream>
#include<math.h>
using namespace std;
int binaryToDecimal(int num);
int decimalToBinary(int num);
int binaryToDecimal(int num)
{
    int i,temp,x=0;
    for(i=0;i<20;i++)
    {
        if(num!=0)
        {
            temp=num%10;
            x=x+(temp*pow(2,i));
            num=num/10;
        }
    }
    return x;
}
int decimalToBinary(int num)
{
    int i,temp,a[30]={0},value=0;
    for(i=0;i<20;i++)
    {
        if(num!=0)
        {
            temp=num%2;
            a[i]=temp;
            value++;
            num=num/2;
        }
    }
    for(i=value-1;i>=0;i--)
    {
        cout<<a[i];
    }
}
int main()
{
    int binary1,binary2,add;
    int i,temp;
    cout<<"Enter Binary Number 1:";
    cin>>binary1;
    cout<<"Enter Binary Number 2:";
    cin>>binary2;
    binary1=binaryToDecimal(binary1);
    binary2=binaryToDecimal(binary2);
    add=binary1+binary2;
    decimalToBinary(add);
    return 0;
}
