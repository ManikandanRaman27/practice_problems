#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter Multi Word String : ";
    getline(cin,str);
    vector<string> arr;
    string temp;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=' ')
        {
            temp=temp+str[i];
        }
        else if(str[i]==' ')
        {
            arr.push_back(temp);
            temp="";
        }
    }
    arr.push_back(temp);
    temp="";
    for(int i=arr.size()-1;i>-1;i--)
    {
        temp+=arr[i];
        if(i!=0)
            temp+=" ";
    }
    cout<<temp;
    return 0;
}
