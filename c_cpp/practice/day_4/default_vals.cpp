#include<iostream>
using namespace std;

int add(int a, int b, int c=0, int d=1){
  return a+b+c+d;
}


int main(){
  
  int a,b,ans;
  
  cout<<add(2, 3)<<endl;
  cout<<add(2, 3, 0)<<endl;
  cout<<add(2, 3, 0, 0)<<endl;
  cout<<add(5, 5, 10)<<endl;
  cout<<add(5, 5, 10, 3)<<endl;
  
  return 0;
}
