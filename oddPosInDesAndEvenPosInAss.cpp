#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums;
    vector<int> odds;
    vector<int> evens;
    vector<int> result;
    int temp,i;
    cout<<"Enter Numbers : ";
    while(true)
    {
        cin>>temp;
        nums.push_back(temp);
        if(getchar()=='\n')
            break;
    }
    for(auto i:nums)
    {
        if(i%2!=0)
            odds.push_back(i);
        else
            evens.push_back(i);
    }
    sort(evens.begin(),evens.end());
    sort(odds.begin(),odds.end(),greater<int>());
    for(i=0;i<odds.size();i++)
    {
        result.push_back(odds[i]);
        result.push_back(evens[i]);
    }
    for(int i:result)
        cout<<i<<" ";
    return 0;
}
