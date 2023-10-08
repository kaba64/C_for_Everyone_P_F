#include <stdio.h>
#include <math.h>

/* Compute the function sin(x), where x is supposed to be radian
   Kazem Bazesefdpar
   Oct. 8, 2023
*/

int main(void){
  double x; // intput variable
  printf("enter value between 0 and 1:");
  scanf("%lf",&x);
  printf("sin(%lf) = %lf\n",x,sin(x));
  return 0;
}
