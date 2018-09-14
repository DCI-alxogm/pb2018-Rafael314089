#include <stdio.h>
int main()
{
int j,n;
printf("Dime el numero de elementos para trabajar\n");
scanf("%i",&n);
float numeros[n]; 
for(j=0;j<n;j++)
  {
scanf("%f",&numeros[j]);
numeros[j]*=2;
printf("%f\n",numeros[j]);
}

return 0;
}
