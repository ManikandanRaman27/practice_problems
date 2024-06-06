#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
public:
    int side1,side2,side3;
public:
    Triangle perimeterOfTriangle(Triangle side1,Triangle side2,Triangle side3)
    {
        Triangle perimeter;
        perimeter=side1+side2+side3;
        return perimeter;
    }
    Triangle areaOfTriangle(Triangle side1,Triangle side2,Triangle side3)
    {
        Triangle area,s;
        s=(side1+side2+side3)/2.0;
        area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
        return area;
    }
};

int main()
{
    Triangle obj;
    obj.side1=3;
    obj.side2=4;
    obj.side3=5;
    cout<<"Perimeter:"<<obj.perimeterOfTriangle(obj.side1,obj.side2,obj.side3)<<endl;
    cout<<"Area:"<<obj.areaOfTriangle(obj.side1,obj.side2,obj.side3)<<endl;
    return 0;
}
