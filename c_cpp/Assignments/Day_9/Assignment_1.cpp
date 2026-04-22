#include<iostream>
#include<cmath>
using namespace std;

class Array{
  int size;
  int *arr;
  public:
    Array(){
      size = 0;
      arr = NULL;
    }
    Array(int n){
      size = n;
      arr = new int[size];
    }
    Array(const Array &n){
     size = n.size;
      arr = new int[size];
      for(int i=0;i<size;i++){
        arr[i] = n.arr[i];
      }
    }
    ~Array(){
      delete []arr;
    }
    Array& operator = (const Array &n){
      if(this != &n){
        delete [] arr;
        }
        size = n.size;
        arr = new int[size];
         for(int i=0;i<size;i++){
           arr[i] = n.arr[i];
        }
      return *this;
    }
    void Input(){
    cout<<"Enter "<<size<<" Array elements: "<<endl;
      for(int i=0;i<size;i++){
        
        cin>>arr[i];
      }
    }
    void Display(){
      cout<<"Array elements are: "<<endl;
      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
    Array operator + (const Array &n){
      Array temp(size);
      for(int i=0;i<size;i++){
        temp.arr[i] = arr[i] + n.arr[i];
      }
      return temp;
    }
    Array operator-(){
      Array temp(size);
      for(int i=0;i<size;i++){
        temp.arr[i] = -arr[i];
      }
      return temp;
    } 
    Array operator!(){
      Array temp(size);
      for(int i=0;i<size;i++){
        temp.arr[i] = arr[size - i - 1];
        //arr[size - i - 1] = temp.arr[i];
      }
      return temp;
    } 
};

int main(){
  Array a1(4),a2(4);
  a1.Input();
  a2.Input();
  
  Array a3, a4, a5;
  a1.Display();
  a2.Display();
  
  a3 = a1+a2;
  a4 = -a1;
  a5 = !a1;
  
  a3.Display();
  cout<<endl;
   
  a4.Display();
  cout<<endl;
  a5.Display();
  
  return 0;
}
