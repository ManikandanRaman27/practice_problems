#include<iostream>
using namespace std;
int main()
{
    int hardness,strength;
    float carbon;
    cout<<"Enter Hardness:";
    cin>>hardness;
    cout<<"Enter Carbon Content:";
    cin>>carbon;
    cout<<"Enter Strength:";
    cin>>strength;
    if(hardness>50&&carbon<0.7&&strength>5600)
        cout<<"Grade is 10"<<endl;
    else if(hardness>50&&carbon<0.7)
        cout<<"Grade is 9"<<endl;
    else if(carbon<0.7&&strength>5600)
        cout<<"Grade is 8"<<endl;
    else if(hardness>50&&strength>5600)
        cout<<"Grade is 7"<<endl;
    else if(hardness>50||carbon<0.7||strength>5600)
        cout<<"Grade is 6"<<endl;
    else
        cout<<"Grade is 5"<<endl;
    return 0;
}
