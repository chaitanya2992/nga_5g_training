#include<iostream>
using namespace std;

class Calc{
  int a;
  int b;
  public:
    int Add(int a, int b){
      return a+b;
    }
    int Sub(int a, int b){
      return a-b;
    }
    int Multi(int a, int b){
      return a*b;
    }
    int Div(int a, int b){
      return a/b;
    }
};

int main(){ 
  int input,x,y;
  cout<<"Choose option to perform an action:"<<endl;
  cout<<"1. Addition"<<endl;
  cout<<"2. Subtraction"<<endl;
  cout<<"3. Multiplication"<<endl;
  cout<<"4. Division"<<endl;
  cin>>input;
  if(input > 0 && input <=3){
  cout<<"Enter 2 numbers:"<<endl;
  cin>>x;
  cin>>y;
  Calc c1;
    switch(input){
      case 1: cout<<c1.Add(x,y)<<endl; break;
      case 2: cout<<c1.Sub(x,y)<<endl; break;
      case 3: cout<<c1.Multi(x,y)<<endl; break;
      case 4: cout<<c1.Div(x,y)<<endl; break;
      default: cout<<"Enter valid option."<<endl; break;
      }
  }
  else{
    cout<<"Enter valid option."<<endl;
  }
  return 0;
}
