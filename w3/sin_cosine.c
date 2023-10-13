#include<stdio.h>
#include<math.h>

int main(void)
{ 
  double interval, variable;
  int i, maxn=30;
  
  interval = 1.0/maxn;
  for(i = 0; i <30; i++)
    {
      variable = i*interval;
      printf("sin( %lf ) = %lf \t cosine( %lf ) = %lf\n", variable, sin(variable), variable, cos(variable));
    }
  
  printf("\n+++++++\n");
  return 0;
}
