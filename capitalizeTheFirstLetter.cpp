#include<iostream>
#include<string>
using namespace std;
int main()
{
    string sentence;
    getline(cin,sentence);
    cout<<sentence<<endl;

    int i,x=sentence.length();
    sentence[0]=toupper(sentence[0]);
    for(i=0;i<x;i++)
    {
        if(sentence[i]==' ')
        {
            sentence[i+1]=toupper(sentence[i+1]);
        }
    }
    cout<<sentence;
    return 0;
}
