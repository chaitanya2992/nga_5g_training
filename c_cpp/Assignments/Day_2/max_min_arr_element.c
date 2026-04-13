#include<stdio.h>
#include<limits.h>

void input(int arr[], int n){
  printf("Enter %d Elements: \n",n);
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
}

void max_min(int arr[], int n, int *max, int *min){
 
  for(int i=0;i<n;i++){
    if(*max < arr[i]){
      *max = arr[i];
    }
    if(*min > arr[i]){
      *min = arr[i];
     }
  }
}

int main(){
  int arr[5];
  input(arr, 5);
  int max=INT_MIN;
  int min=INT_MAX;
  max_min(arr, 5, &max, &min);
  printf("Max Value is: %d,\nMin Value is: %d\n", max, min);
  return 0;
}
