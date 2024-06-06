#include<iostream>
#include<string>
using namespace std;
int main()
{
    string sentence;
    getline(cin,sentence);
    int i,x=sentence.length();
    for(i=0;i<x;i++)
    {
        switch(sentence[i])
        {
        case 65 ... 89:
        case 97 ... 121:
            sentence[i]=sentence[i]+1;
            break;
        case 90:
            sentence[i]=65;
            break;
        case 122:
            sentence[i]=97;
            break;
        default:
            continue;
        }
    }
    cout<<sentence;
    return 0;
}
