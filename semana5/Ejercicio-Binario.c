#include <stdio.h>
#include <math.h>

int main ()
{
 int x, b=0, a=1;
   printf("\tPROGRAMA PARA TRADUCIR UN NUMERO NORMAL A UNO BINARIO\n\n");
   printf("Por favor introduce el numero que desea convertir: ");
   scanf("%i",&x);

   while (x>0)
     {
       b=a*(x%2)+b;
       a=a*10;
       x=x/2;
     }
   printf("El resultado de su conversion es: %i\n", b);

   return 0;
}

       
       
  
