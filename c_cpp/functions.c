#include<stdio.h>

void swap(int x, int y){

x = x + y;
y = x - y;
x = x - y;
printf("After swap x = %d, y = %d\n", x, y);
}

int main(){
int a = 2;
int b = 3;
printf("Before swap x = %d, y = %d\n", a, b);
swap(a, b);
return 0;

}
