#include<iostream>
using namespace std;

class Array{
  int size;
  int *arr;
  public:
    Array(){
      size = 5;
      arr = new int[size];
      for(int i=0;i<size;i++){
        arr[i] = 0;
      }
    }
    Array(int n){
      size = n;
      arr = new int[size];
      for(int i=0;i<size;i++){
        arr[i] = 0;
      }
    }
    Array(const Array &a){
      size = a.size;
      arr = new int[size];
      for(int i=0;i<size;i++){
        arr[i] = 0;
      }    
    }
    ~Array(){
      delete []arr;    
    }
    void Accept(){
      cout<<"Enter size of Array: "<<endl;
      cin>>size;
      arr = new int[size];
      for(int i=1;i<=size;i++){
        cout<<"Enter element "<<i<<endl;
        cin>>arr[i-1];
      }
    }
    void Display(){
    cout<<"Array Elements are: "<<endl;
      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
};

int main(){
  Array a;
  a.Display();
  
  Array a1(3);
  a1.Display();
  
  Array a2 = a1;
  cout<<"Copied Array: "<<endl;
  a2.Display();
  
  Array a3;
  a.Accept();
  a.Display();

  return 0;

}
