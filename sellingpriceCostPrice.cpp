/*If the total selling price of 15 items and the total profit earned on them
is input,write  a program to find the cost price of one item.*/
#include<iostream>
using namespace std;
int main()
{
    int sp,profit,cp;
    float cp1,pro;
    cout<<"Total Selling Price of 15 Items:";
    cin>>sp;
    cout<<"Enter Profit earned:";
    cin>>profit;
    cp=sp-profit;
    pro=(((float)profit/cp)*100)/15;
    cp1=(float)cp/15;
    cout<<"Cost Price of 1 Item:"<<cp1<<endl;
    cout<<"profit for one item:"<<pro<<"%"<<endl;
    return 0;
}
