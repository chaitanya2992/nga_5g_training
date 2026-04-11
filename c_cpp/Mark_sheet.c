#include<stdio.h>

int main(){

int marks;
printf("Enter Marks: \n");
scanf("%d", & marks);

if(marks > 25 && marks <= 40){
  printf("Just Pass.\n");
}
else if(marks > 40 && marks <= 70 ){
   printf("Second class.\n");
}
else if(marks > 70 && marks < 90 ){
   printf("First class.\n");
}
else if(marks >= 90 && marks <= 100 ){
   printf("Distinction.\n");
}

else{
printf("Fail.\n");
}

return 0;
}
