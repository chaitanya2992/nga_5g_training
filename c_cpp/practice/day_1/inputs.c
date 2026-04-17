#include<stdio.h>

int main(){

int n = 23;
float ft = 2.34;
printf("integer n is %d\n", n);
int a,b;
float x,y;

printf("Enter 2 numbers, 2 float numbers:\n");
scanf("%d%d%f%f", &a,&b,&x,&y);

printf("a = %d, b = %d,\n x = %f, y = %f\n", a,b,x,y);

return 0;
}
