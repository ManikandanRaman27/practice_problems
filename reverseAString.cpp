#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word;
    getline(cin,word);
    cout<<word<<endl;
    int len=word.length(),x;
    char temp;
    cout<<len<<endl;
    for (x=0;x<(len-1)/2;x++)
    {
        temp=word[x];
        word[x]=word[len-1-x];
        word[len-1-x]=temp;
    }
    cout<<word<<endl;
    return 0;
}
