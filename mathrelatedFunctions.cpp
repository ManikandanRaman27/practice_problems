#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float x=3,y=4,z;
    z=max(x,y);
    z=min(x,y);
    z=pow(x,y);
    z=sqrt(y);
    z=cbrt(27);//cuberoot
    z=hypot(3,4);//hypotenuse
    z=abs(-5);
    float PI=3.141591;
    z=round(PI);
    z=ceil(PI);
    z=floor(PI);
    z=trunc(-2.5);//truncated to next lower value
    z=fmod(5.3,2);//decimal number modulus
    z=signbit(-x);//return sign bit
    cout<<z<<endl;
    return 0;
}

