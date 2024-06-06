#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[20];
    std::vector<int>dynamicArray;
    int element,i,value2=0;
    char ch;
    cout<<"Enter Array Elements:";
    for(i=0;;i++)
    {
        cin>>element;
        if(element==-1)
        {
            break;
        }
        dynamicArray.push_back(element);
    }
    for(int value:dynamicArray)
    {
        a[value2]=value;
        cout<<a[value2]<<" ";
        value++;
    }
    return 0;
}
