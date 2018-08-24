#include <stdio.h>
#include <math.h>

int main ()
{
  float centigrados, farenhenit, num1;
  printf("Dame un valor para convertirtelo en grados Farenhenit o en grados centigrados(Escribelo dos veces):");
    scanf("%f", &num1);
     centigrados= (num1*1.8)+32;
 farenhenit= (num1-32)/(1.8);
   
    printf("Tu resultado es %f en grados farenheint y %f en grados centigrados",farenhenit, centigrados);
  
  
  return 0;
}
