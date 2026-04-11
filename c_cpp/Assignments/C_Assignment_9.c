#include<stdio.h>
int main(){

int x,y,z;

printf("Enter 3 values: \n");
scanf("%d%d%d",&x,&y,&z);

if(y>x && y>z){
printf("%d is greater\n",y);
}
else if(z>x && z>y){
printf("%d is greater\n",z);
}
else{
printf("%d is greater\n",x);
}

return 0;
}
