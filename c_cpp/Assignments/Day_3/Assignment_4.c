#include<stdio.h>
#include<string.h>

void char_count(char str[]){
  char target_char;
  int count=0;
  printf("Entered a char to count: \n");
  scanf("%c", &target_char);
  for(int i=0;i<strlen(str);i++){
    if(str[i] == target_char){
        count++;
      }
    }
    printf("Char \'\%c\'\ count: %d\n", target_char, count);
}
  
void space_count(char str[]){
  int count=0;
  for(int i=0;i<strlen(str);i++){
    if(str[i] == ' '){
        count++;
      }
    }
    printf("space count: %d\n", count);
}

void word_count(char str[]){
  int count=0;
  for(int i=0;i<strlen(str);i++){
    if(str[i] == ' '){
        count++;
      }
  }
  count++;
  printf("Word count: %d\n", count);
}

void vowel_count(char str[]){
  int count = 0;
  for(int i=0;i<strlen(str);i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
        count++;
       }
    }
    printf("vowel count: %d\n", count);
}

int main(){

  char str[200];
  printf("Enter String: \n");
  gets(str);  
  
  char_count(str);
  space_count(str);
  word_count(str);
  vowel_count(str);
  
  
  
return 0;
}
