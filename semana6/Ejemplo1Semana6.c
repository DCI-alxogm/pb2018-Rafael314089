#include <stdio.h>


int main()
{
  float numeros[10];
  int i;
  

for(i=0; i<10;i++)
    {
      scanf("%f",&numeros[i]);
	}

 for(i=0;i<10;i++)
   {
     printf("%f\n", numeros[i]);
   }
 for(i=0;i<10;i++)
   {
     scanf("%f",&numeros[i]);
     numeros[i]*=2;
     printf("%f\n", numeros[i]);
return 0;
}

  
