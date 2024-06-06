#include <iostream>
using namespace std;
class BankAccount{
  private:
    string accountNo;
    string accountName;
    string accountType;
    float accountBalance;
  public:
    BankAccount(string acno,string acna,string acty,float acbl){
      accountNo=acno;
      accountName=acna;
      accountType=acty;
      accountBalance=acbl;
    }
    void setAccNo(string acno){
      accountNo=acno;
    }
    void setAccHolderName(string acna){
      accountName=acna;
    }
    void setAccType(string acty){
      accountType=acty;
    }
    void setAccBalance(float acbl){
      accountBalance=acbl;
    }
    string getAccNo(){
      return accountNo;
    }
    string getAccHolderName(){
      return accountName;
    }
    string getAccType(){
      return accountType;
    }
    float getAccBalance(){
      return accountBalance;
    }
    void deposit(float amount){
      accountBalance+=amount;
    }
    void withdraw(float amount){
      if(accountBalance<amount){
        cout<<"Error: account balance is low!"<<endl;
      }
      else{
        accountBalance-=amount;
      }
    }
    BankAccount operator+(const BankAccount& other){
      BankAccount result("","","",0);
      result.accountBalance=accountBalance+other.accountBalance;
      return result;
    }
    bool operator==(const BankAccount& other){
      return accountNo == other.accountNo;
    }
    virtual float getInterestRate(){
      return 0.0;
    }
};
class SavingAccount:public BankAccount{
  public:
    SavingAccount(string acno,string acna,float acbl): BankAccount(acno,acna,"saving",acbl){}
    float getInterestRate() override{
      return 0.02;
    }
};
class CheckingAccount:public BankAccount{
  public:
    CheckingAccount(string acno,string acna,float acbl): BankAccount(acno,acna,"checking",acbl){}
    float getInterestRate() override{
      return 0.00;
    }
};

int main(){
  BankAccount acc1("12345","mani","saving",1000.0);
  SavingAccount acc2("12346","vishnu",2000.0);
  CheckingAccount acc3("12347","guna",5000.0);
  acc1.deposit(500.0);
  acc2.withdraw(1000.0);
  acc3.withdraw(2000.0);
  BankAccount acc4=acc1+acc2;
  cout<<"Combined Balance: "<<acc4.getAccBalance()<<endl;
  if(acc1==acc2){
    cout<<"Account no. matched!\n";
  }
  else{
    cout<<"Account no. Mismatched!\n";
  }
  cout<<"Interest rate for saving account: "<<acc2.getInterestRate()<<endl;
  cout<<"Interest rate for checking account: "<<acc3.getInterestRate()<<endl;


  return 0;
}

