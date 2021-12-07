#include<stdio.h>

int sayHey (void);
int printStr (char* s, int len){


void main (void){
  
  printf("hello\n");
  
  sayHey();

  char arr[100]= "";

  printStr(arr, 10)
  
  return 0;
}

int sayHey (void) {
  printf("Hey~\n");
  return 0;
}
  
int printStr (char* s, int len){
  printf("%s", s);
  return 0;
}
