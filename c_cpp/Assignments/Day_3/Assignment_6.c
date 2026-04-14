#include<stdio.h>
#include<string.h>
#include <stdbool.h>
int main(){
 
 char str[200];
 printf("Enter a String: \n");
 gets(str);
 bool ans = true;
 int n =strlen(str);
 for(int i=0;i<n/2; i++){
  if(str[i] != str[n-i-1]){
    ans = false;
    break;
    }
 }
 
 if(ans){
  printf("%s is Palindrome.\n", str);
 }
 else{
   printf("%s is not Palindrome.\n", str);
 }
 
 return 0;
}
