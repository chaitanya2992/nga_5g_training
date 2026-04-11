#include<stdio.h>

int main(){

int num;
printf("Enter a number to check even or odd: \n");
scanf("%d", & num);

if(num != 0){
  int ans = num%2;
  if(ans == 0){
  printf("Number %d is even.\n", num);
  }
  else{
    printf("Number %d is odd.\n", num);
    }
}

else{
printf("Number %d is either 0 or NAN.\n", num);
}

return 0;
}
