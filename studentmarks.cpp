//input->5 marks  output->aggregate marks,percentage,max mark 100
#include<iostream>
using namespace std;
int main()
{
    int m1,m2,m3,m4,m5,agg;
    float per;
    cout<<"All Marks:";
    cin>>m1>>m2>>m3>>m4>>m5;
    if(m1<=100&&m2<=100&&m3<=100&&m4<=100&&m5<=100)
    {
        agg=m1+m2+m3+m4+m5;
        per=(float)agg/5;
    }
    else
    {
        cout<<"Mark is Invalid";
        exit(-1);
    }
    cout<<"Aggregate Mark out of 500 is "<<agg<<endl;
    cout<<"Percentage is "<<per<<endl;
    return 0;
}
