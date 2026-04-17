#include<iostream>
#include<cstring>
using namespace std;

class Laptop{
  int id;
  char *brand;
  double price;
  
  public:
    Laptop(){
      id = 01;
      brand = new char[5];
      strcpy(brand, "Dell");
      price = 45000;
    }
    Laptop(int id, char *name, double price){
      id = id;
      brand = new char[strlen(name)+1];
      strcpy(brand, name);
      price = price;
    }
    void Display(){
      cout<<"ID: "<<id<<"\nBrand: "<<brand<<"\nPrice: "<<price<<endl;
    }
    ~Laptop(){
      delete []brand;
    }
};

int main(){
  Laptop l1;
  
  
  l1.Display();
  
  
  return 0;
}
