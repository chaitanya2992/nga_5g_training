#include<stdio.h>
void input(int arr[][300], int rows, int cols){
  printf("Enter %d sub arrays and %d values in each array: \n", rows, cols);
 for(int i=0;i<rows;i++){
    for(int j =0; j<cols; j++){
        scanf("%u ", *(arr+i)+j);
      }
  }
}

void output(int arr[][300], int rows, int cols){
  printf("Array Values are: \n");
  for(int i=0;i<cols;i++){
    for(int j =0; j<rows; j++){
        printf("%u ", *(*(arr+j)+i));
      }
      printf("\n");
  }
}
int main(){
  int rows, cols;
  printf("No. Of rows: \n");
  scanf("%d", &rows);
  printf("No. Of Columns: \n");
  scanf("%d", &cols);
   
  int arr[300][300];
  input(arr, rows, cols);
  output(arr, rows, cols);

return 0;
}
