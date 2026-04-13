#include<stdio.h>

int main(){

int arr[5] = {0, 1, 2, 3, 4};

printf("%u\n",*arr);
printf("%u\n",*arr+1);
printf("%u\n",arr[1]);
printf("%u\n",arr);


printf("%u\n",&arr);
printf("%u\n",&arr+1);
printf("%u\n",&arr[1]);
printf("%u\n",&arr[1]+1);


return 0;
}
