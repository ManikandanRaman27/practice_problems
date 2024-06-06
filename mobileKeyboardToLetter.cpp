#include<iostream>
using namespace std;
int main()
{
    string number;
    int i;
    cout<<"Enter Number:";
    cin>>number;
    for(i=0;i<number.length();i++)
    {
        switch(number[i])
        {
        case '2':
            cout<<"a";
            break;
        case '22':
            cout<<"b";
            break;
        case 222:
            cout<<"c";
            break;
        case 3:
            cout<<"d";
            break;
        case 33:
            cout<<"e";
            break;
        case 333:
            cout<<"f";
            break;
        case 4:
            cout<<"g";
            break;
        case 44:
            cout<<"h";
            break;
        case 444:
            cout<<"i";
            break;
        case 5:
            cout<<"j";
            break;
        case 55:
            cout<<"k";
            break;
        case 555:
            cout<<"l";
            break;
        case 6:
            cout<<"m";
            break;
        case 66:
            cout<<"n";
            break;
        case 666:
            cout<<"o";
            break;
        case 7:
            cout<<"p";
            break;
        case 77:
            cout<<"q";
            break;
        case 777:
            cout<<"r";
            break;
        case 7777:
            cout<<"s";
            break;
        case 8:
            cout<<"t";
            break;
        case 88:
            cout<<"u";
            break;
        case 888:
            cout<<"v";
            break;
        case 9:
            cout<<"w";
            break;
        case 99:
            cout<<"x";
            break;
        case 999:
            cout<<"y";
            break;
        case 9999:
            cout<<"z";
            break;

        }

    }
    return 0;
}
