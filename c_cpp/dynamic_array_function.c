#include<stdio.h>

void input(int arr[], int n){
printf("Enter %d Elements: \n",n);
for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
}

void print(int arr[], int n){
printf("Array Elements:\n",n);
for(int i=0;i<n;i++){
  printf("%d ",arr[i]);
  }
  printf("\n");
}

int main(){
int arr[5];
input(arr, 5);
print(arr, 5);

return 0;
}
