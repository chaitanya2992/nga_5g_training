#include<iostream>
using namespace std;

int areaPeri(int &l,int &b,int &area,int &peri){
  area = l*b;
  peri = 2*(l+b);

  return area, peri;
}
int main(){

  int l, b, area =0 , peri=0;
  cout<<"Rectangle Length: "<<endl;
  cin>>l;
  cout<<"Rectangle Breadth: "<<endl;
  cin>>b;
  
  areaPeri(l, b, area, peri);
  
  cout<<"Area: "<<area<<endl;
  cout<<"Perimeter: "<<peri<<endl;

  return 0;

}
