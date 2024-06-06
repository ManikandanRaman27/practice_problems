#include<iostream>
using namespace std;
int main()
{
    string board[100];
    int i;
    for(i=0;i<100;i++)
    {
        cin>>board[i];
    }
    for(i=0;i<100;i++)
    {
        if(i%10==0)
            cout<<endl;
        printf("%s ",board[i]);
    }
    return 0;
}
