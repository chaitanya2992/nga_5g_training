#include<stdio.h>

int main(){

int len, breadth;

printf("Enter Length & Breadth:\n");
scanf("%d%d", &len, &breadth);

for(int i=0;i<=breadth;i++){
	for(int j=0;j<len;j++){
		printf("* ");
	}
	printf("\n");

}

return 0;
}
