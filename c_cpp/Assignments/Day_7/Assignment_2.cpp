#include<iostream>
#include<cstring>
using namespace std;

class Date{
  protected:
  int dd;
  int mm;
  int yyyy;
  public:
    Date():dd(10),mm(05),yyyy(2002){
  }
  Date(int d, int m, int y):dd(d),mm(m),yyyy(y){
    //dd=d;
    //mm=m;
  }
  void Display(){
    cout<<dd<<"-"<<mm<<"-"<<yyyy<<endl;
  }
};

class Employee{
  protected:
    int eid;
    char name[50];
    int dd, mm, yyyy;
    public:
      Employee(){
        eid = 99;
        strcpy(name, "sid");
        dd = 01;
        mm = 01;
        yyyy = 2001;
      }
      Employee(int a, const char* ch, int d, int m, int y){
        eid = a;
        strcpy(name, ch);
        dd=d;
        mm=m;
        yyyy=y;
      }
      /*void accept(){
        cout<<"Employee id:"<<endl;
        cin>>emp_id;
        cout<<"Employee name:"<<endl;
        cin>>name;
        cout<<"Employee dob:"<<endl;
        cin>>dob;
      }*/
      void Display(){
        cout<<eid<<endl;
        cout<<name<<endl;
        cout<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
      }
};
class Wage_Employee:public Employee{
  protected:
    int hours;
    int wage;
    public:
      Wage_Employee(){
        hours = 0;
        wage = 0;
      }
      Wage_Employee(int id,const char *nm, int d, int m, int y, int h, int w):Employee(id,nm,d,m,y){
        hours = h;
        wage = w;
      }
      double totalwage(){
        return hours*wage;
      }
      void Display(){
        Employee::Display();
        cout<<"Hours: "<<hours<<endl;
        cout<<"Wage: "<<wage<<endl;
        cout<<"Total wage: "<<totalwage()<<endl;
      }
};
class SalesPerson: public Wage_Employee{
  int sold;
  int coms;
  public:
    SalesPerson(){
      sold = 0;
      coms = 0;
    }
    SalesPerson(int id,const char *nm, int d, int m, int y, int h, int w, int it, int cm):Wage_Employee(id,nm,d,m,y,h,w){
      sold = it;
      coms = cm;
    }
    double sales_salary(){
      return (hours*wage + sold * coms);
    }
    void Display(){
      Employee::Display();
      cout<<"Total salary: "<<sales_salary()<<endl;
    }
};
int main(){
  SalesPerson e1(1,"ravi", 01,01,2001, 2, 200, 3, 100 );
  e1.Display();
  cout<<endl;
  SalesPerson e2(2,"dev", 23,05,20012, 2, 2550, 30, 150 );
  e2.Display();
  
  return 0;
}
