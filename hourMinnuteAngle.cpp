#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float hour,minute,ia,oa,y;
    cout<<"Enter Hour Hand And Minute Hand With Space :";
    cin>>hour>>minute;
    if(hour<=12&&minute<60)
    {
        y=hour+(minute/60.0);
        ia=((abs(y-(minute/5.0)))*5)*6;
        oa=360-ia;
        cout<<"interior Angle:"<<ia<<endl;
        cout<<"exterior Angle:"<<oa<<endl;
    }
    else
    {
        cout<<"Invalid Time!!!"<<endl;
    }
    return 0;
}
