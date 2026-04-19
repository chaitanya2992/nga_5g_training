#include<iostream>
#include<cstring>
using namespace std;

class Date{
  int dd;
  int mm;
  int yyyy;
  public:
    Date();
    Date(int , int, int);
    void Display();
};
Date::Date():dd(10),mm(05),yyyy(2002){
}
Date::Date(int d, int m, int y):dd(d),mm(m),yyyy(y){
  //dd=d;
  //mm=m;
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
  dob=Date(d,m,y);
}
void Employee::Display(){
  cout<<eid<<endl;
  cout<<name<<endl;
  dob.Display();
}
class Wage_Employee:public Employee{
  int hours;
  int wage;
  public:
    Wage_Employee();
    Wage_Employee(int, const char*, int, int, int, int, int);
    void Display();
};
Wage_Employee::Wage_Employee(){
  hours = 1;
  wage = 150;
}
Wage_Employee::Wage_Employee(int id,const char *nm, int d, int m, int y, int h, int w):Employee(id,nm,d,m,y){
  hours = h;
  wage = w;
}
void Wage_Employee::Display(){
  Employee::Display();
  cout<<hours<<endl;
  cout<<wage<<endl;
}
int main(){
  Wage_Employee e1(1,"ravi", 01,01,2001, 2, 200);
  e1.Display();
  
  return 0;
}
