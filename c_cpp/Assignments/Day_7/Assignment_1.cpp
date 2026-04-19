#include<iostream>
#include<cstring>
using namespace std;

class Account{
  protected:
  long acc_num;
  char name[50];
  double balance;
  public:
    Account(){
      acc_num = 00001;
      strcpy(name, "pavan");
      balance = 100.0;
    }
    void AccountInput(){
      cout<<"Enter account number: "<<endl;
      cin>>acc_num;
      cout<<"Enter Account Holder Name: "<<endl;
      cin>>name;
      cout<<"Enter balance: "<<endl;
      cin>>balance;
    }
    void Display(){
      cout<<"Account Number: "<<acc_num<<endl;
      cout<<"Name: "<<name<<endl;
      cout<<"Balance: "<<balance<<endl;
    } 
};

class SavingsAccount:public Account{
  float intrest;
  int months;
  public:
   SavingsAccount(){
      intrest = 0.9;
      months = 100;
    }
    void SavingsAccountInput(){
      Account::AccountInput();
      cout<<"Enter Interest rate: "<<endl;
      cin>>intrest;
      cout<<"Enter Months: "<<endl;
      cin>>months;
    }
    double net_bal(){
        return  balance + ((intrest/10) * months);
    }
    void Display(){
      Account::Display();
      cout<<"Interest Rate: "<<intrest<<endl;
      cout<<"Months: "<<months<<endl;
      cout<<"Net Balance: "<<net_bal()<<endl;
    } 
};

class CurrentAccount:public Account{
  double OdLimit;
  public:
   CurrentAccount(){
      OdLimit = 0;
    }
    void CurrentAccountInput(){
      Account::AccountInput();
      cout<<"Enter OD limit amount: "<<endl;
      cin>>OdLimit;
    }
    void Display(){
      Account::Display();
      cout<<"Over Limit amount: "<<OdLimit<<endl;
    } 
};

int main(){
  int option;
  cout<<"Welcome to Bank choose from below options:"<<endl;
  cout<<"1. Savings Account"<<endl;
  cout<<"2. Current Account"<<endl;
  cout<<"3. Exit. "<<endl;
  cin>>option;
  
  if(option == 1){
    SavingsAccount sa1;
    sa1.SavingsAccountInput();
    sa1.Display();
  }
  else if(option == 2){
    CurrentAccount ca1;
    ca1.CurrentAccountInput();
    ca1.Display();
  }
  else{
    cout<<"Exit."<<endl;
  }
  return 0;
}


