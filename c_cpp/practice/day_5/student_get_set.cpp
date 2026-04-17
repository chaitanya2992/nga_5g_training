#include<iostream>
#include<cstring>
using namespace std;

class Student{
  int roll_number;
  char name[100];
  double percentage;
  public:
    Student();
    Student(int, const char*, double);
    void Accept();
    void Display();
    void set_Rnum(int);
    void get_Rnum() const;
};

void Student::get_Rnum() const{
  cout<<roll_number<<endl;
}

void Student::set_Rnum(int rn){
  roll_number = rn;
}

Student::Student(){
  roll_number = 3;
  strcpy(name, "Temp");
  percentage = 99;
}

Student::Student(int n, const char *ch, double p){
  roll_number = n;
  strcpy(name, ch);
  percentage = p;
}

void Student::Accept(){
  cout<<"Enter Student roll number, name, percentage: "<<endl;  
  cin>>roll_number>>name>>percentage;
  cout<<endl;
}
void Student::Display(){
  cout<<"Roll number: "<<roll_number<<endl;
  cout<<"Student name: "<<name<<endl;  
  cout<<"Student percentage: "<<percentage<<endl;
  cout<<endl;
}

int main(){
  
  Student s1(22, "Tharun", 88);
  s1.Display();
  cout<<endl;
  
  s1.get_Rnum();
  s1.set_Rnum(2);
  s1.Display();
  cout<<endl;
  
  return 0;
}
