#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num,i,j;
    cin>>num;
    string numBelow20[]={"one","two","three","four","five","six","seven","eight","nine","ten",
    "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string more20to90[]={"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
    string more100[]={"hundred","thousand"};
    int countBelow20=sizeof(numBelow20)/sizeof(string);
    int countMore20to90=sizeof(more20to90)/sizeof(string);
    int countmore100=sizeof(more100)/sizeof(string);
    if(num<20)
        cout<<numBelow20[num-1];
    if(num<100)
    {
        cout<<more20to90[(num/10)-1];
    }
    return 0;
}
