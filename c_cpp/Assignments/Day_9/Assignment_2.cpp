#include<iostream>
#include<cstring>
using namespace std;

class Employee{
  int eid;
  char name[50];
  double salary;
  public:
    Employee(){
      eid = 0;
      strcpy(name, "Test");
      salary = 0.00;
    }
    Employee(int i, char *ch, double sal){
      cout<<"Enter Employee id, name, salary: "<<endl;
      eid = i;
      strcpy(name, ch);
      salary = sal;
    }
    void Input(){
      cout<<"Enter Employee id, name, salary: "<<endl;
      cin>>eid;
      cin>>name;
      cin>>salary;      
    }
    void Display(){
      cout<<"Employee id:"<<eid<<endl;
      cout<<"Name: "<<name<<endl;
      cout<<"Salary: "<<salary<<endl;
    }
    bool operator>(Employee e){
      return salary > e.salary;
    }
    bool operator == (Employee e){
      return(eid == e.eid && strcmp(name, e.name) == 0 && salary == e.salary);
    }
    bool operator!=(Employee e){
      return !(*this == e);
    }
};

int main(){
  Employee e1;
  cout <<"Enter details of Employee 1:"<<endl;
  e1.Input();
  Employee e2;
  cout <<"Enter details of Employee 2:"<<endl;
  e2.Input();
  
  if(e1 > e2){
     cout <<"Employee 1 is greater then Employee 2."<<endl;
  }
  else{
    cout <<"Employee 2 is greater then Employee 1."<<endl;
  }
  if(e1 == e2){
     cout <<"Employee 1 and Employee 2 data is same."<<endl;
  }
  if(e1 != e2){
     cout <<"Employee 1 and Employee 2 data is different."<<endl;
  }
  return 0;  
}
