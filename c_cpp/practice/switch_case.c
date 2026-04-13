#include<stdio.h>

int main(){

int rank;
printf("Enter rank: \n");
scanf("%d", & rank);

switch(rank){

  case 1:
    printf("1st rank.\n");
    break;
    
  case 2:
    printf("2nd rank.\n");
    break;
    
  case 3:
    printf("3rd rank.\n");
    break;

  default:
    printf("Runner ups.\n");
    break;
    
  }

return 0;
}
