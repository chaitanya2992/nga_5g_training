#include<iostream>
#include<cstring>
using namespace std;

class Complex{
  int real_int;
  int imaginary_int;
  public:
    Complex(){
      real_int = 1;
      imaginary_int = 2;
    }
    Complex(int a, int b){
      real_int = a;
      imaginary_int = b;
    }
    int get_real(){
      return real_int;
    }
    int get_img(){
      return imaginary_int;
    }
    void set_real(int a){
      real_int = a;
    }
    void set_img(int a){
      imaginary_int = a;
    }
    void Display(){
      cout<<real_int;
      if(imaginary_int > 0 ){
          cout<<"+"<<imaginary_int<<"i"<<endl;
      }
      else{
          cout<<imaginary_int<<"i"<<endl;
      }
    }   
};

int main(){
  Complex c;
  Complex c1(1,2);
  
  c.Display();
  
  c.set_real(5);
  c.set_img(-8);
  c.Display();
  
  return 0;
}


