#include<stdio.h>

void input(int arr[], int n){
 printf("Enter %d Numbers: \n", n);
  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
}

void delete(int arr[], int n, int del){
  for(int i=0;i<n-1;i++){
    if(i >= del){
      arr[i] = arr[i+1];
    }
  }
  printf("After deleting index %d: \n", del);
  for(int i=0;i<n-1;i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(){
  int del;
  int arr[5];
  
  input(arr, 5);
  
  printf("Enter Index to DELETE: \n");
  scanf("%d",&del);
  
  delete(arr, 5, del);
  
  return 0;
}
