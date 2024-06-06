#include<iostream>
using namespace std;
int main()
{
    string gender;
    int age;
    cout<<"Enter Your Age:";
    cin>>age;
    cout<<"Enter Your Gender:";
    cin>>gender;
    if(age>=18)
    {
        if(gender=="male")
        {
            cout<<"Go to Room Number 5"<<endl;
        }
        else if(gender=="female")
        {
            cout<<"Go to Room Number 6"<<endl;
        }
    }
    else
        cout<<"You Are Not Eligible For Voting"<<endl;
    return 0;
}
