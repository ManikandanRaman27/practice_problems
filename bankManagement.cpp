#include<iostream>
using namespace std;
int cash_deposit(int cash);
int cash_withdrawl(int cash);
int cash_deposit(int cash)
{
    int amt;
    cout<<"Enter How Much You Deposit:";
    cin>>amt;
    cash=amt+cash;
    return cash;
}
int cash_withdrawl(int cash)
{
    int amt;
    cout<<"Enter How Much You Withdraw:";
    cin>>amt;
    if(cash>amt)
    {
        cash=cash-amt;
    }
    else
    {
        cout<<"Your Balance is "<<cash<<"\n It Is Too Low!!!"<<endl;
        exit(1);
    }
    return cash;
}
int main()
{
    int ch,cash=0;
    int choice;
    string name;
    cout<<"Enter Name:";
    getline(cin,name);
    do
    {
        cout<<"Welcome "<<name<<"!!!"<<endl;
        cout<<"Enter Choice To Select:"<<endl;
        cout<<"1->Cash Deposit"<<endl;
        cout<<"2->Cash Withdrawl"<<endl;
        cout<<"3->Check Balance"<<endl;
        cin>>ch;
        cout<<"-----------------------------------------------"<<endl;
        if(ch==1)
        {
            cash=cash_deposit(cash);
        }
        else if(ch==2)
        {
            cash=cash_withdrawl(cash);
        }
        else if(ch==3)
        {
            cout<<"Your Account Balance:"<<cash<<endl;
        }
        else
        {
            goto finish;
        }
        cout<<"-----------------------------------------------"<<endl;
        cout<<"Enter Choice To Select or Exit:\n 1->Reselect"<<endl;
        cin>>choice;
        cout<<"-----------------------------------------------"<<endl;
    }while(choice==1);
    finish:
    cout<<"Your Account Balance:"<<cash<<endl;
    return 0;
}
