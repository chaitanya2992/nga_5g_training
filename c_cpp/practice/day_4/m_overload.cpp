#include<iostream>
using namespace std;

int add(int a, int b){
  return a+b;
}

int add(int a, int b, int c){  
  c = a+b;
  return c;
}

float add(int a, float f, float ans){
  ans = a+f;
  return ans;
}


int main(){
  
  int a,b,ans;
  
  cout<<add(2, 3)<<endl;
  cout<<add(2, 3, 0)<<endl;
  cout<<add(2, 5.0, 0)<<endl;
  
  return 0;
}
