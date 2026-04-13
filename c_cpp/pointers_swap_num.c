#include<stdio.h>

void swap(int *xa, int *xb){
int temp=*xa;

*xa = *xb;
*xb = temp;
}

int main(){
int a=2;
int b=3;
printf("Before swapping a = %d, b = %d\n", a, b);
swap(&a,&b);
printf("After swapping a = %d, b = %d\n", a, b);
return 0;
}
