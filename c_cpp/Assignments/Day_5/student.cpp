#include<iostream>
using namespace std;

class Student{
  int roll_number;
  char name[100];
  double percentage;
  public:
    void Accept();
    void Display();
};

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
  Student s;
  s.Accept();
  s.Display();
  cout<<endl;
  
  return 0;
}
