#include<iostream>
using namespace std;
void swap(int &fa, int &fb){
  fa = fa + fb;
  fb = fa - fb;
  fa = fa - fb;
}

int main(){
  
  int a,b;
  cout<<"Enter 2 numbers to swap: "<<endl;
  cin>>a>>b;
  
  cout<<"Before swap a = "<<a<<", B = "<<b<<endl;
  swap(a,b);
  cout<<"After swap a = "<<a<<", B = "<<b<<endl;
  
  return 0;
}
