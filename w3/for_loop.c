#include <stdio.h>

int main(int argc,char* argv[]){
  int i;
  for(i=0,printf("Initialize : %d\n",i);i<5;printf("Increment : %d\n",i),i++)
    printf("inside : %d\n",i);
  return 0;
}
