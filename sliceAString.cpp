#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cout<<"Enter A String:";
    getline(cin,a);
    b=a.substr(0,3);
    cout<<b<<endl;
    return 0;
}
