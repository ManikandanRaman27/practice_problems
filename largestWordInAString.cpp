#include<iostream>
using namespace std;
int main()
{
    string sen,words[50]={""};
    cout<<"Enter Sentences:";
    getline(cin,sen);
    int len=sen.length(),i,j,wordcount=0,maxcount;
    for(i=0;i<len;i++)
    {
        if(sen[i]==' ')
        {
            wordcount++;
            continue;
        }
        words[wordcount]=words[wordcount]+sen[i];
    }
    for(i=0;i<=wordcount;i++)
        cout<<words[i]<<endl;
    int value=0;
    for(i=0;i<=wordcount;i++)
    {
        if(value<words[i].length())
            value=words[i].length();
    }
    for(i=0;i<=wordcount;i++)
    {
        if(value==words[i].length())
            cout<<words[i]<<" ";
    }
    return 0;
}
