#include<iostream>
using namespace std;

struct Book{

  int book_id;
  char title[100];
  double price;

};

void output(struct Book b){
  
    cout<<"Book ID: "<<b.book_id<<endl;
    cout<<"Title: "<<b.title<<endl;
    cout<<"Price: "<<b.price<<endl;
    cout<<endl;
}

int main(){
  
  int n;
  cout<<"Enter No.of books to store: "<<endl;
  cin>>n;
  struct Book b[n];
  for(int i=1;i<=n;i++){
    cout<<"Enter book "<<i<<" id, title, price: "<<endl;
    cin>>b[i].book_id>>b[i].title>>b[i].price;
    cout<<endl;
    }

  for(int i=1;i<=n;i++){
  cout<<"Book "<<i<<" details are: "<<endl;
    output(b[i]);
    }
  
  return 0;  
}
