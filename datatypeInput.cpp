#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,x;
    float b;
    char c;
    string dad;
    cout<<"Enter Integer:";
    cin>>a>>x;
    cout<<"Enter Float:";
    cin>>b;
    cout<<"Enter Character:";
    cin>>c;
    fflush(stdin);
    cout<<"Enter String: ";
    getline(cin,dad);
    cout<<"int:"<<a*x<<endl;
    cout<<"float:"<<b<<endl;
    cout<<"character:"<<c<<endl;
    cout<<"string:"<<dad<<endl;
    return 0;
}
