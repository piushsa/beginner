#include <stdio.h>
int strcmp(const char*,const char*);
void main(){
  char *val1="Piush is an asshole";
  char *val2="Piush is an asshole";
  int test=strcmp(val1,val2);
}


int strcmp(const char *val1,const char *val2){
  int sum=0;
  while(*val1 && *val2){
    sum=sum+(((int)*val1)-((int)*val2));
  }
  return sum;
}
