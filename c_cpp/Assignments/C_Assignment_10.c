#include<stdio.h>
#include<ctype.h>

int main(){

char x;

printf("Enter a char: \n");
scanf("%c",&x);

int asc = (int) x;
char ans;
if(asc >= 65 && asc <= 90){
  ans=tolower(x);
  printf("%c\n",ans);
}
if(asc >= 97 && asc <= 122){
  ans = toupper(x);
  printf("%c\n",ans);
}

return 0;
}
