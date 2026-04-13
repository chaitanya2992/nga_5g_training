#include<stdio.h>

void reverse(int arr[], int n){

for(int i=0;i<n/2;i++){
  int temp;
  temp = arr[i];
  arr[i] = arr[n-i-1];
  arr[n-i-1] = temp;
  
}

for(int i=0;i<n;i++){
  printf("%d ", arr[i]);
}
printf("\n");
}

int main(){

int arr[] = {5, 4, 3, 2, 1};
int n = 5;

reverse(arr, n);


return 0;
}
