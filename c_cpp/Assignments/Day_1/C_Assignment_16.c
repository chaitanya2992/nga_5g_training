#include<stdio.h>

int main(){
int n=5;

for(int i=n; i>0; i--){
    
    for(int j=1; j<=i; j++){
        if(j==n){
            continue;
        }
        printf("%d ", j);
    }

    int tmp = n-i;

    for(int j=0; j<tmp+(tmp-1); j++){
        printf("  ");
    }
    
    for(int j=i; j>0; j--){
        printf("%d ",j);
    }

    printf("\n");
}

   return 0;
}

