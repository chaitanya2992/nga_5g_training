#include<stdio.h>

int main(){

int x,y;
int opt;
printf("Enter 2 Numbers: \n");
scanf("%d%d", &x,&y);

printf("choose operation:\n1. addittion.\n2. subtraction.\n3. multiplication.\n4. division. \n");
scanf("%d", &opt);

int ans;
switch(opt){

  case 1:
    ans = x+y;
    break;
    
  case 2:
    ans = x-y;
    break;
    
  case 3:
    ans = x*y;
    break;

  case 4:
    ans = x/y;
    break;
    
  default:
    ans = 0;
    break;
    
  }
  
printf("Answer is: %d\n", ans);

return 0;
}
