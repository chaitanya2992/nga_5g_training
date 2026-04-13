#include<stdio.h>

int main(){

int sale_amount, salary;

printf("Enter salary: \n");
scanf("%d", &salary);

printf("Enter sale_amount: \n");
scanf("%d", &sale_amount);

int comission;
if(sale_amount < 5000){
  comission = 0;
}

else if(sale_amount >= 5000 && sale_amount <= 7500){
  comission = sale_amount*0.03;
}
else if(sale_amount > 7500 && sale_amount <= 10500){
   comission = sale_amount*0.08;
}
else if(sale_amount > 10500 && sale_amount < 15000){
  comission = sale_amount*0.11;
}
else if(sale_amount >= 15000 ){
   comission = sale_amount*0.15;
}

printf("Net salary: %d, Commission earned: %d.\n",salary+comission, comission);

return 0;
}
