#include<iostream>
#include<cstring>
using namespace std;
class Employee{
  int eid;
  char name[50];
  double salary;
  public:
    Employee(){
      eid= 1;
      strcpy(name,"joy");
      salary = 300;
    }
    Employee(int id, const char *nm, double sal){
      eid = id;
      strcpy(name, nm);
      salary = sal;
    }
    void Display(){
      cout<<"ID: "<<eid<<endl;
      cout<<"Name: "<<name<<endl;
      cout<<"salary: "<<salary<<endl;
    }  
};
class wage_Employee: public Employee{
  int hours;
  int wage;
  public:
    wage_Employee(){
      hours = 1;
      wage = 4;
    }
    wage_Employee(int id, const char *nm, double sal, int h, int w):Employee(id,nm,sal){
      hours = h;
      wage = w;
    }
    void Display(){
      Employee::Display();
      cout<<"Hours: "<<hours<<endl;
      cout<<"Wage: "<<wage<<endl;
    }  
};

int main(){
  Employee *eptr;
  wage_Employee we1;
  eptr = &we1;
  eptr->Display();
  we1.Display();
  return 0;
}
