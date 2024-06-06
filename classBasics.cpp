#include<iostream>
#define pi 3.141592
using namespace std;
template<class T>
T areaOfCircle(T a)
{
    T area;
    area=pi*a*a;
    return area;
}
template<class T>
T circumferenceOfCircle(T a)
{
    T circum;
    circum=2*pi*a;
    return circum;
}
class circle
{
    private:
        float rad;
    public:
        float area()
        {
            cout<<"Enter Radius Of the Circle:";
            cin>>rad;
            return pi*rad*rad;
        }
        float circumference()
        {
            return pi*2*rad;
        }
};
int main()
{
    float radius;
    cout<<"Enter Radius:";
    cin>>radius;
    cout<<"Area Of Circle : "<<areaOfCircle(radius)<<endl;
    cout<<"Circumference Of Circle : "<<circumferenceOfCircle(radius)<<endl;
    circle O;
    cout<<"Area Of Circle : "<<O.area()<<endl;
    cout<<"Circumference Of Circle : "<<O.circumference()<<endl;
    return 0;
}
