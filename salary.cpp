//input->salary  DA->40%  HRA->20% of salary  find GS
#include<iostream>
using namespace std;
int main()
{
    float salary,da,hra,gs;
    cout<<"Salary:";
    cin>>salary;
    da=salary*((float)40/100);
    hra=salary*((float)20/100);
    gs=salary+da+hra;
    cout<<"Salary="<<salary<<endl;
    cout<<"DA="<<da<<endl;
    cout<<"HRA="<<hra<<endl;
    cout<<"GS="<<gs<<endl;
    return 0;
}
