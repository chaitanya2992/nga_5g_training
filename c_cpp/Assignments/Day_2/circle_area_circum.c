#include<stdio.h>

void AreaCircum(int r, int *area, int *circum){

*area = 3.14*(r*r);
*circum = 2 * 3.14 * r;

}

int main(){
int radius = 24;
int area;
int circum;
AreaCircum(radius, &area, &circum);

printf("Radius: %d,\nArea: %d,\nCircumference: %d\n", radius, area, circum);
return 0;
}
