#include<iostream>
using namespace std;

class Complex{
  int real_int;
  int imaginary_int;
  static int count;
  public:
    Complex(){
      real_int = 1;
      imaginary_int = 2;
      count+=1;
    }
    Complex(int a, int b){
      real_int = a;
      imaginary_int = b;
      count+=1;
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
    
    static void total_count(){
      cout<<"Total objects created: "<<count<<endl;
    }
};
int Complex::count = 0;
int main(){
  Complex c;
  Complex c1(1,2);
  
  c.Display();
  
  c.set_real(5);
  c.set_img(-8);
  c.Display();
  
  Complex::total_count();
  
  return 0;
}


