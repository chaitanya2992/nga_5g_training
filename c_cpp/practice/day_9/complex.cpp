#include<iostream>
#include<cmath>
using namespace std;

class Complex{
  int real;
  int img;
  public:
    Complex(){
    real = 1;
    img = 5;
    }
    Complex(int i, int j){
      real = i;
      img = j;
    }
    void Display(){
    char ch;
    ch = (img >= 0)? '+':'-';
      cout<<real<<ch<<abs(img)<<"i"<<endl;
    }
    Complex operator + (Complex c){
      Complex tmp;
      tmp.real = real + c.real;
      tmp.img = img + c.img;
      return tmp;
    }
    Complex operator - (Complex c){
      Complex tmp;
      tmp.real = real - c.real;
      tmp.img = img - c.img;
      return tmp;
    }
    
};

int main(){
  Complex c1(1,3);
  c1.Display();
  
  Complex c2(5,4);
  c2.Display();
  
  Complex c3;
  c3 = c1+c2;
  c3.Display();
  
  Complex c4;
  c4 = c1-c2;
  c4.Display();
  return 0;
}
