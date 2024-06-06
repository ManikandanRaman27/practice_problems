//a3b6 -> aaabbbbbb
#include<bits/stdc++.h>
#include<string>
#include<ctype.h>
using namespace std;

void print(char chr,int times)
{
    for(int i=0;i<times;i++)
        cout<<chr;
}
int main()
{
    string str;
    cout<<"Enter String : ";
    cin>>str;
    char temp;
    int i,j;
    for(i=0;i<str.length();i++)
    {
        if(isalpha(str[i]))
        {
            j=i+1;
            int cnt=0;
            temp=str[i];
            while(isdigit(str[j]))
            {
                cnt=cnt*10 + int(str[j]-'0');
                j++;
            }
            print(temp,cnt);
            i=j-1;
        }

    }
    return 0;
}
