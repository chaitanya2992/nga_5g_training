#include<iostream>
using namespace std;

int multiply(int a,int b=1,int c=1,int d=1){

  return a*b*c*d;
}
int main(){
  
  cout<<multiply(2)<<endl;
  cout<<multiply(2, 3)<<endl;
  cout<<multiply(2, 3, 3)<<endl;
  cout<<multiply(2, 3, 3, 3)<<endl;
  
  return 0;

}
