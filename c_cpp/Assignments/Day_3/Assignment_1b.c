#include<stdio.h>

void input(int arr[], int n){
 printf("Enter %d Numbers: \n", n);
  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
}

void reverse(int arr[], int tArr[], int n){
  for(int i=0;i<n;i++){
    tArr[n-i-1] = arr[i];
    }
}

void output(int tArr[], int n){
  for(int i=0;i<n;i++){
    printf("%d ", tArr[i]);
    }
    printf("\n");
}

int main(){
  int arr[5];
  int tArr[5];
  input(arr, 5);
  reverse(arr, tArr, 5);
  output(tArr, 5);
  
return 0;
}
