#include<iostream>
#include<cstring>
using namespace std;

class Student{
  int roll_number;
  char name[100];
  double percentage;
  static int roll_count;
  public:
    Student(){
      roll_number = roll_count;
      strcpy(name, "Temp");
      percentage = 99;
      roll_count++;
    }

    Student(const char *ch, double p){
      
      roll_number = roll_count;
      strcpy(name, ch);
      percentage = p;
      roll_count++;
    }

    void Accept(){
      
      roll_number = roll_count;
      cout<<"Enter Student name, percentage: "<<endl;  
      cin>>name>>percentage;
      roll_count++;
      cout<<endl;
    }
    void Display(){
      cout<<"Roll number: "<<roll_number<<endl;
      cout<<"Student name: "<<name<<endl;  
      cout<<"Student percentage: "<<percentage<<endl;
      cout<<endl;
    }
};
int Student::roll_count=0;

int main(){
  Student s;
  s.Accept();
  s.Display();
  cout<<endl;
  
  Student s1("Tharun", 88);
  s1.Display();
  cout<<endl;
  
  Student s2;
  s2.Display();
  
  return 0;
}
