#include<iostream>
#include<cstring>
using namespace std;

class PrintClass{
  public:
    virtual void PrintDetails() = 0;
};

class CricketPlayer: public PrintClass{
  char name[100];
  int runs;
  public:
   CricketPlayer(){
      strcpy(name, "virat kohli");
      runs = 99;
    }
    CricketPlayer(char *nm, int rn){
      strcpy(name, nm);
      runs = rn;
    }
    void PrintDetails(){
      cout<<"name: "<<name<<endl;
      cout<<"Runs: "<<runs<<endl;
    }
};

class FootBallPlayer: public PrintClass{
  char name[100];
  int goals;
  public:
    FootBallPlayer(){
      strcpy(name, "Chetri sunil");
      goals = 8;
    }
    FootBallPlayer(char *nm, int gls){
      strcpy(name, nm);
      goals = gls;
    }
    void PrintDetails(){
      cout<<"name: "<<name<<endl;
      cout<<"Goals: "<<goals<<endl;
    }
};

int main(){
  PrintClass *pc1;
  
  FootBallPlayer fp1;
  pc1 = &fp1;
  pc1->PrintDetails();
  
  CricketPlayer cp1;
  pc1 = &cp1;
  pc1->PrintDetails();
  
  return 0;
}
