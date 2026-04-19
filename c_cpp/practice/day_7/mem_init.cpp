#include<iostream>
#include<cstring>
using namespace std;

class Date{
  int dd;
  int mm;
  public:
    Date();
    Date(int , int);
    void Display();
};
Date::Date():dd(10),mm(05){
}
Date::Date(int d, int m):dd(d),mm(m){
  //dd=d;
  //mm=m;
}
void Date::Display(){
  cout<<dd<<"-"<<mm<<endl;
}

int main(){
  Date d1;
  d1.Display();
  
  Date d2(4,5);
  d2.Display();
  
  return 0;
}
