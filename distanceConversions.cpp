//input->km to print meter,feet,inches,cm
#include<iostream>
using namespace std;
int main()
{
    float km,meter,feet,inch,centimeter;
    cout<<"Distance in Km:";
    cin>>km;
    meter=km*1000;
    centimeter=meter*100;
    feet=centimeter/30.48;
    inch=centimeter/2.54;
    cout<<"In meter:"<<meter<<endl;
    cout<<"In centimeter:"<<centimeter<<endl;
    cout<<"In feet:"<<feet<<endl;
    cout<<"in inch:"<<inch<<endl;
    return 0;
}
