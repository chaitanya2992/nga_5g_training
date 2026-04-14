#include<stdio.h>

void input(int arr[], int n){
 printf("Enter %d Numbers: \n", n);
  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
}

void reverse(int arr[], int n){
  for(int i=0;i<n/2;i++){
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
    }
}

void output(int arr[], int n){
  for(int i=0;i<n;i++){
    printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
  int arr[5];
  
  input(arr, 5);
  reverse(arr, 5);
  output(arr, 5);
  
return 0;
}
