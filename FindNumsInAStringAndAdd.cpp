#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,temp;
    cout<<"Enter String:";
    getline(cin,str);
    printf("%s\n",str.c_str());
    int i,j,sum=0;
    for(i=0;i<str.length();i++)
    {
        if(isdigit(str[i]))
        {
            temp.push_back(str[i]);
            for(j=i+1;j<str.length();j++)
            {
                if(isdigit(str[j]))
                    temp.push_back(str[j]);
                else
                    break;
                i=j;
            }
            sum+=stoi(temp);
            temp.clear();
        }
    }
    cout<<sum;
    return 0;
}

