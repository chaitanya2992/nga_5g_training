#include<iostream>
#include<cstring>
using namespace std;

class Employee{
  int id;
  char name[100];
  double salary;
  static int count;
  public:
    Employee(){
      id = 001;
      strcpy(name, "Temp");
      salary = 29099;
      count++;
    }

    Employee(int n, const char *ch, double p){
      id = n;
      strcpy(name, ch);
      salary = p;
      count++;
    }

    void Accept(){
      cout<<"Enter Employee ID, name, Salary: "<<endl;  
      cin>>id>>name>>salary;
      cout<<endl;
      count++;
    }
    void Display(){
        cout<<"ID: "<<id<<endl;
        cout<<"Employee name: "<<name<<endl;  
        cout<<"Salary: "<<salary<<endl;
        cout<<endl;
    }
    void update_name(int eid, const char *ch){
          if(id == eid){
            strcpy(name, ch);
          }
        }
    void update_salary(int eid, double nsal){
        if(id == eid){
          salary = nsal;
        }
    }
    static int total_count(){
      return count;
    }
};
int Employee::count=0;
int main(){
  int ct = Employee::total_count();
  Employee e[3];
  int opt, n=1;
  do{
    cout<<"Choose number to perform an action: "<<endl;
    cout<<"1. Insert a record."<<endl;
    cout<<"2. Update Employee details."<<endl;
    cout<<"3. List all employees."<<endl;
    cout<<"4. Exit."<<endl;
    cin>>opt;
    
        if(opt == 1){
        for(int i=0;i<3;i++){
            e[i].Accept();
            n++;
          }
        }
        else if(opt == 2){
          int nid,num;
          cout<<"Enter Employee ID to Update details: "<<endl;
          cin>>nid;
          cout<<"Choose number to perform an action: "<<endl;
          cout<<"1. Update name."<<endl;
          cout<<"2. Update salary."<<endl;
          cin>>num;
          
          if(num==1){
            char uname[100];
            cout<<"Enter Name to update"<<endl;
            cin>>uname;
            for(int i=1;i<=ct;i++){
              e[i].update_name(nid, uname);
            }
          }
          else if(num==2){
            double usalary;
            cout<<"Enter Salary to update"<<endl;
            for(int i=1;i<=ct;i++){
              e[i].update_salary(nid, usalary);
            }
          }
        }
        else if(opt == 3){ 
          for(int i=1;i<=ct;i++){
            e[i].Display();
          }
        }
        else if(opt == 4){
          cout<<"Exit."<<endl;
          break;
        }
    }while(opt < 5);
  return 0;
} 
