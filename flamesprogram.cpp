#include<iostream>
using namespace std;
int main()
{
    string boyname,girlname;
    cout<<"Enter Boy name:";
    cin>>boyname;
    cout<<"Enter Girl name:";
    cin>>girlname;
    int i,j,x=boyname.length(),y=girlname.length();
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(boyname[i]==girlname[j])
            {
                while(boyname[i]<x)
                {
                    boyname[i]=boyname[i+1];
                }
                 x--;
                 while(girlname[j]<y)
                {
                    girlname[j]=girlname[j+1];
                }
                 y--;
            }
        }
    }
    cout<<boyname<<""<<girlname<<endl;
    return 0;
}
