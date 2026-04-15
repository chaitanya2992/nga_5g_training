#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter N records: "<<endl;
  cin>>n;
  
  int *arr;
  arr = new int[n];
  
  for(int i=1;i<=n;i++){
    cout<<"Enter subject "<<i<<" marks: "<<endl;
    cin>>arr[i];
  }
  int sum=0;
  for(int i=1;i<=n;i++){
    sum+=arr[i];
  }
  
  float avg = sum/n;
   
  cout<<"Average marks of "<<n<<" subjects: "<<avg<<endl;
  
  delete []arr;

  return 0;
}
