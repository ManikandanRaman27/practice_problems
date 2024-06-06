#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> array1;
    vector<int> array2;
    vector<int> finalArray;
    int temp,i;
    cout<<"Enter Numbers of array 1: ";
    while(true)
    {
        cin>>temp;
        array1.push_back(temp);
        if(getchar()=='\n')
            break;
    }
    cout<<"Enter Numbers of array 2: ";
    while(true)
    {
        cin>>temp;
        array2.push_back(temp);
        if(getchar()=='\n')
            break;
    }
    for(int i:array1)
    {

        if(count(finalArray.begin(),finalArray.end(),i))
            continue;
        else
            finalArray.push_back(i);
    }
    for(int i:array2)
    {
        if(count(finalArray.begin(),finalArray.end(),i))
            continue;
        else
            finalArray.push_back(i);
    }
    sort(finalArray.begin(),finalArray.end());
    for(int i:finalArray)
        cout<<i<<" ";
    return 0;
}
