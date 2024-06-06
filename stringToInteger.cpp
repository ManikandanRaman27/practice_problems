#include<iostream>
using namespace std;
int main()
{
    string num;
    int number,i,x;
    cout<<"Enter Number:";
    cin>>num;
    x=num.length();
    for(i=x-1;i>=0;i--)
    {
        switch(num[i])
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                cout<<num[i];
                break;
            default:
                cout<<"Invalid Number"<<endl;
                exit(1);
                break;
        }

    }
    return 0;
}
