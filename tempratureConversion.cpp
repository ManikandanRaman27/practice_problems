#include<iostream>
using namespace std;
int main()
{
    float temperature;
    char choice;
    cout<<"***Temperature conversion***\n";
    cout<<"F->Fahrenheit\nC->Celsius\n";
    cout<<"Enter Choice:";
    cin>>choice;
    if(choice=='F'||choice=='f')
    {
        cout<<"Enter the temperature in Celsius:";
        cin>>temperature;
        temperature=(1.8*temperature)+32;
        cout<<"Temperature in Fahrenheit is "<<temperature<<" F\n";
    }
    else if(choice=='C'||choice=='c')
    {
        cout<<"Enter the temperature in Fahrenheit:";
        cin>>temperature;
        temperature=(temperature-32)/1.8;
        cout<<"Temperature in Celsius is "<<temperature<<" C\n";
    }
    else
    {
        cout<<"wrong choice!!!\n";
    }
    cout<<"************************************";
    return 0;
}
