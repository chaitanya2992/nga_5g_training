#include<stdio.h>
#include<stdbool.h>

int main(){
int num;
bool ans = true;
printf("Enter any number: \n");
scanf("%d",&num);
for(int i=2;i<=num/2;i++){
  if(num % i == 0){
  ans = false;
  }
}
if(ans){
  printf("prime number");
}
else{
  printf("non - prime number");
}
return 0;
}
