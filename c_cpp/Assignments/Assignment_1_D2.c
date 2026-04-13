#include<stdio.h>

void Fibonacci(int n){
int x = 0;
int y = 1;
  for(int i=0;i<n;i++){
    printf("%d %d ", x, y);
    x+=y;
    y+=x;
  }
}

int main(){
  int n;
  printf("Enter no.of Elements: \n");
  scanf("%d",&n);
  Fibonacci(n);
  return 0;
}
