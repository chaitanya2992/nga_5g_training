#include<iostream>
using namespace std;

class Base{
  int *p;
  public:
    Base(){
      p = new int;
    }
  virtual ~Base(){
    delete p;
  }
};
class Derived: public Base{
  int *q;
  public:
    Derived(){
      q = new int;
    }
  ~Derived(){
    delete q;
  }
};
int main(){
  Base *ptr = new Derived;
  delete ptr;
  return 0;
}
