#include<stdio.h>

int main(){

int a,b,c,d,e;

printf("Enter 5 numbers to Average them:\n");

scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

int avg = (a+b+c+d+e)/5;

printf("The Average of %d, %d, %d, %d, %d is %d.\n",a,b,c,d,e,avg);

return 0;
}
