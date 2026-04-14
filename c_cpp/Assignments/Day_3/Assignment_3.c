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
  printf("multiplication of two matrices are:\n");
  for(int i=0;i<rows;i++){
    for(int j =0; j<cols; j++){
        int multi = arr1[i][j]*arr1[i][j];
        printf("%u ", multi);
      }
      printf("\n");
    }
}


int main(){
  int arr1[300][300];
  int arr2[300][300];
  
  input(arr1, 3, 3);
  input(arr2, 3, 3);

  sum(arr1, arr2, 3, 3);
  
return 0;
}
