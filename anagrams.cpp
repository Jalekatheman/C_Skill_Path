#include <stdio.h>
#include <string>
#include <cstring>

int main(){

  int counter1[] = {0,0,0,0};
  int counter2[] = {0,0,0,0};
  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";
  int flag = 0;

    for(int i = 0; i < strlen(s1); i++){
    if(s1[i] =='a'){
      counter1[0]++;
    }else if(s1[i] =='b'){
      counter1[1]++;
    }else if(s1[i] =='c'){
      counter1[2]++;
    }else if(s1[i] =='d'){
      counter1[3]++;
    }else if(s1[i] ==' '){
      continue;
    }
    }  
    for(int j = 0; j < strlen(s2); j++){
    if(s2[j] =='a'){
      counter2[0]++;
    }else if(s2[j] =='b'){
      counter2[1]++;
    }else if(s2[j] =='c'){
      counter2[2]++;
    }else if(s2[j] =='d'){
      counter2[3]++;
    }else if(s2[j] ==' '){
      continue;
    }
}
    for(int w = 0; w < 4; w++){
    if(counter1[w] == counter2[w]){
      continue;
    } else {
      flag = 1;
    }

    for(int y = 0; y < 4; y++){
    if(flag == 0){
      printf("Anagram!");
    } else {
      printf("Not Anagram!");

    }

  }
}
}