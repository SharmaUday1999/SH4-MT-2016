#include <stdio.h>

int isSuffix(const char* s1, const char* s2);
int main(void){
  char* string1;
  char* string2;
  char s1[] = "hello";
  char s2[] = "llo0";

  string1 = s1;
  string2 = s2;

  printf("%d\n", isSuffix(string1, string2));
}



int isSuffix(const char* s1, const char* s2){
  int length1  = 0;
  int length2  = 0;

  for(int i = 0; s1[i] != '\0'; i++){
      length1++;
  }
  for(int i = 0; s2[i] != '\0'; i++){
      length2++;
  }

  int counter = 0;

  for(int i = 0 ; s2[i] != '\0'; i++){
      if(s2[i] == s1[length1 - length2 + i]){
        counter++;
      }
      else
        return 0;
  }

  if(counter == length2){
    return 1;
  }
}
