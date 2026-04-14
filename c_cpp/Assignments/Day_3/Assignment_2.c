#include<stdio.h>

void input(int arr[][300], int rows, int cols){
  printf("Enter %d sub arrays and %d values in each array: \n", rows, cols);
 for(int i=0;i<rows;i++){
    for(int j =0; j<cols; j++){
        scanf("%u ", *(arr+i)+j);
      }
  }
}

void sum(int arr1[][300], int arr2[][300], int rows, int cols){
  printf("Sum of two matrices are:\n");
  for(int i=0;i<rows;i++){
    for(int j =0; j<cols; j++){
    int add = arr1[i][j]+arr1[i][j];
        printf("%u ", add);
      }
      printf("\n");
    }
}


int main(){
  int arr1[300][300];
  int arr2[300][300];
  int m,n;
  
  printf("enter matrix row size: ");
  scanf("%d", &m);
  printf("enter matrix column size: ");
  scanf("%d", &n);
  
  input(arr1, m, n);
  input(arr2, m, n);

  sum(arr1, arr2, m, n);
  
return 0;
}
