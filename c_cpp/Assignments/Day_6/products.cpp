#include<iostream>
#include<cstring>
using namespace std;

class Product{
  int product_id;
  char *product_name;
  double cost;
  
  public:
    Product(){
      product_id = 01;
      product_name = new char[10];
      strcpy(product_name, "Iphone15");
      cost = 95000;
    }
    Product(int id, const char *name, double price){
      product_id = id;
      product_name = new char[strlen(name)+1];
      strcpy(product_name, name);
      cost = price;
    }
    void Display(){
      cout<<"ID: "<<product_id<<"\nProduct name: "<<product_name<<"\ncost: "<<cost<<endl;
      cout<<endl;
    }
    ~Product(){
      delete []product_name;
    }
};

int main(){
  Product p1;
  
  
  p1.Display();
  
  Product p2(2, "Dell_Laptop", 45000);
  p2.Display();
  
  
  return 0;
}
