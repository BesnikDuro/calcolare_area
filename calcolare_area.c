#include <math.h>
#include <stdio.h>

int main(int argc,char* argv[])
{
  int base, altezza, area;
  /*  base = 5;
  altezza = 1;
  */

  printf("inserire il valore di base ");
  scanf("%f", &base);

  printf("inserire il valore di altezza ");
  scanf("%f", &altezza);
  
  
  area = base * altezza;
  printf("area è = %f\n", area);

  return 0;
}
