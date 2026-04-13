#include<stdio.h>

void input(int arr[], int n){
 printf("Enter %d Numbers: \n", n);
  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
}

void insert(int arr[], int n, int index, int value){
  
  for(int i=n;i>=index;i--){
    if(i == index){
    arr[i] = value;
  }
  else{
    arr[i] = arr[i-1];
  }
  }
  printf("After INSERTING index  at %d: \n", index);
  for(int i=0;i<=n;i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(){
  int arr[5];
  
  input(arr, 5);
  int index, value;
  printf("Enter Index to INSERT Element & value: \n");
  scanf("%d%d",&index,&value);
  
  insert(arr, 5, index, value);
  
  return 0;
}
