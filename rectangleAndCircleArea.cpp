//input->length,breath,radius output->perimeter,area
#include<iostream>
#define pi 3.141591
using namespace std;
int main()
{
    float len,bre,rad,peri,area,cir,cirarea;
    cout<<"Length:";
    cin>>len;
    cout<<"breadth:";
    cin>>bre;
    cout<<"radius:";
    cin>>rad;
    peri=2*(len+bre);
    area=len*bre;
    cir=2*pi*rad;
    cirarea=pi*rad*rad;
    cout<<"Perimeter Of Rectangle:"<<peri<<endl;
    cout<<"Area of Rectangle:"<<area<<endl;
    cout<<"Circumference Of Circle:"<<cir<<endl;
    cout<<"Area of Circle:"<<cirarea<<endl;
    return 0;
}
