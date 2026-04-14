#include<stdio.h>
#include<stdlib.h>

input(int arr[], int n){
  printf("Enter %d values: \n", n);
  for(int i=0;i<n;i++){
    scanf("%u", &arr[i]);
  }
}

swap(int arr[], int n){
  if(n%2 != 0){
      n--;
    }
  for(int i=0;i<n;i+=2){
    int temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp;
  }
}

output(int arr[], int n){
  printf("Array values after swap: \n");
  for(int i=0;i<n;i++){
    printf("%u ", arr[i]);
  }
  printf("\n");
}

int main(){

  int n;
  printf("Enter array length: \n");
  scanf("%u", &n);
  int *arr =(int *) calloc(n, sizeof(int));

  input(arr, n);
  swap(arr, n);
  output(arr, n);

  free(arr);
  arr=NULL;
  
  return 0;

}
