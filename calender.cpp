#include<iostream>
using namespace std;
void displayDay()
{
    string day[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int i;
    for(i=0;i<7;i++)
        {
            cout<<day[i]<<"\t     ";
        }
    cout<<"\n";
}
int main()
{
    int i,j,value=0;
    int monthdays[]={31,28,31,30,31,30,31,31,30,31,30,31};
    string month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    for(j=0;j<12;j++)
    {
        cout<<"\t\t\t\t\t\t"<<month[j]<<"\n\n";
        displayDay();
        for(i=1;i<=monthdays[value];i++)
        {
            cout<<i<<"\t\t";
            if(i%7==0)
            {
               cout<<"\n";
            }
        }
        value++;
        cout<<"\n";
    }
    return 0;
}

