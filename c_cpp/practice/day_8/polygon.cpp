#include<iostream>
using namespace std;

class polygon{
  public:
    virtual double CalcArea() =0;
    virtual double CalcPeri() =0;
};

class circle: public polygon{
  int radius;
  public:
    circle(){
      radius = 1;
    }
    circle(int r){
      radius = r;
    }
    double CalcArea(){
      return 3.142 * radius * radius;
    }
    double CalcPeri(){
      return 3.142 * radius * radius;
    }
};

class Rectangle: public polygon{
  int length;
  int breadth;
  public:
    Rectangle(){
      length = 5;
      breadth = 7;
    }
    Rectangle(int l, int b){
      length = l;
      breadth = b;
    }
    double CalcArea(){
      return length * breadth;
    }
    double CalcPeri(){
      return 2*(length + breadth);
    }
};  

class Square: public Rectangle{
  public:
    Square(){
    }
    Square(int l):Rectangle(l,l){
    }
    double CalcArea(){ 
      return Rectangle::CalcArea();
    }
    double CalcPeri(){
       return Rectangle::CalcPeri();
    }
};  

int main(){
  polygon *pp1;
  circle c1(5);
  pp1 = &c1;
  cout<<pp1->CalcArea()<<endl;
  return 0;
}

