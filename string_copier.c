#include<stdio.h>
#include<string.h>
 
void copy(char* dst, char* src){
  // Code for copying a string goes here
  while(*src == '\0'){
    *src = *dst;
    src++;
    dst++;
  }
  }
 
int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the ne2xt prize!\0";
  char dstString[] = "This is just a test\0";
 
  strcpy(srcString, dstString);

  printf("%s", dstString);
}