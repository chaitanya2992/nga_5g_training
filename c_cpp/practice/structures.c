#include<stdio.h>

struct employee{
  int e_id;
  char dept[15];
  double salary;
};

int main(){
  struct employee e1= { 1, "Dev", 35000 };
  
  printf("Enter employee id, dept, salary: \n");
  struct employee e2;
  scanf("%d%s%lf", &e2.e_id, e2.dept, &e2.salary);
  
  printf("Id: %d, Dept: %s, Salary: %.1lf\n", e1.e_id, e1.dept, e1.salary);
  printf("Id: %d, Dept: %s, Salary: %.1lf\n", e2.e_id, e2.dept, e2.salary);
  
  return 0;
}
