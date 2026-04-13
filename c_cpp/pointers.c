#include<stdio.h>

int main(){

int a = 2;
int *p = &a;
int **q = &p;
printf("%u\n",a);
printf("%u\n",&a);
printf("%u\n",p);
printf("%u\n",*p);
printf("%u\n",&p);
printf("%u\n",q);
printf("%u\n",**q);
printf("%u\n",&q);

return 0;

}
