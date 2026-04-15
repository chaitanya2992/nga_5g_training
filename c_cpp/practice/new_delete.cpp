#include<iostream>
using namespace std;

int main(){

  int n, *arr;

  cout<<"Enter array size n:"<<endl;
  cin>>n;
  arr = new int[n];
  cout<<"Enter "<<n<<" array elements:"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    }
  cout<<"Array elements:"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
  cout<<endl;
  delete[]arr;
  return 0;
}
