#include<iostream>
using namespace std;

int main(){
  int a =6;
  int &ta = a;
  
  a++;
  ++ta;
  ta++;
  ++a;
  cout<<a<<" "<<++ta<<endl;
  return 0;
}
