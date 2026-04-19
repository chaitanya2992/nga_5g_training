#include<iostream>
#include<cstring>
using namespace std;

class Date{
  int dd;
  int mm;
  int yyyy;
  public:
    Date();
    Date(int, int, int);
    void Display();
};
Date::Date(){
  dd = 01;
  mm = 01;
  yyyy = 2001;
}
Date::Date(int d, int m, int y){
  dd = d;
  mm = m;
  yyyy = y;
}
void Date::Display(){
  cout<<dd<<"-"<<mm<<"-"<<yyyy<<endl;
}

class Employee{
  int eid;
  char name[50];
  Date dob;
  public:
    Employee();
    Employee(int, const char*, int, int, int);
    void Display();
};
Employee::Employee(){
  eid = 99;
  strcpy(name, "sid");
}
Employee::Employee(int id,const char *nm, int d, int m, int y):dob(d,m,y){
  eid =id;
  strcpy(name, nm);
}
void Employee::Display(){
  cout<<eid<<endl;
  cout<<name<<endl;
  dob.Display();
}

int main(){
  Employee e1(11, "dev", 3, 4, 2004);
  e1.Display();
  
  return 0;
}
