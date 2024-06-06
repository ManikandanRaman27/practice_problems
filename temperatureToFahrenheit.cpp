//convert cel to fah:formula cel*(9/5)+32  fah-32(5/9)
#include<iostream>
using namespace std;
int main()
{
    float cel,fah;
    cout<<"Enter Temperature in Celcius:";
    cin>>cel;
    fah=(cel*((float)9/5))+32;
    cout<<"in Fahrenheit:"<<fah<<endl;
    cout<<"Enter Temperature in Fahrenheit:";
    cin>>fah;
    cel=(fah-32)*((float)5/9);
    cout<<"in Celcius:"<<cel<<endl;
    return 0;
}
