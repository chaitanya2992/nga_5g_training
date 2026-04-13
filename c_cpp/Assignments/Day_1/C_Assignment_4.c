#include<stdio.h>

int main(){
int a = 1;
int b = 2;

int temp = a;
a = b;
b = temp;

a = a + b;
b = a - b;
a = a - b;

printf("a = %d,\nb = %d\n", a,b);

return 0;
}
