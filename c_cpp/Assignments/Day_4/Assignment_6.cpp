#include<iostream>
#include<string>
using namespace std;

void swap(int a,int b){
  a = a+b;
  b = a-b;
  a = a-b;
  cout<<a<<" "<<b<<endl;
}
void swap(float a,float b){
  a = a+b;
  b = a-b;
  a = a-b;
  cout<<a<<" "<<b<<endl;
}
void swap(string a,string b){
   string tmp = a;
   a = b;
   b = tmp;
   cout<<a<<" "<<b<<endl;
}
int main(){
  
  swap(2, 3);
  swap(2.5f,3.0f);
  swap("H","I");
  
  return 0;

}
