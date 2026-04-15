#include<iostream>
using namespace std;

struct Book{
  
  int book_id;
  char title[100];
  double price;

};

int main(){

  struct Book b1;
  cout<<"Enter book id, title, price: "<<endl;
  cin>>b1.book_id>>b1.title>>b1.price;
  cout<<endl;
  
  cout<<"Book details are: "<< endl;
  cout<<"Book ID: "<< b1.book_id<<endl;
  cout<<"Title: "<< b1.title<<endl;
  cout<<"Price: "<< b1.price<<endl;
  
  
  return 0;  
}
