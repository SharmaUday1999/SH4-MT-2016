#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int day;
  int month;
  int year;
}Date;

int removeDate(Date* birthdates[], int* sizePtr, int index);

int removeDate(Date* birthdates[], int* sizePtr, int index){
  if(index < *sizePtr - 1){
    free(birthdates[index]);
    for(int i = index + 1; i < *sizePtr - 1; i++){
      birthdates[i] = birthdates[i+1];
    }
    *sizePtr--;
    return 0;
  }
  else
    return 0;
}
