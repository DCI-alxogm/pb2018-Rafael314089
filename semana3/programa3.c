#include <math.h>
#include <stdio.h>

int main()
{
    int valor;
    printf("Programa conversor de coordenadas cartesianas a coordenadas esfericas\n");
    printf("Los pasos que se daran a continuacion son los siguientes:\n 1.-Convertir coordenada cartesianas a coordenadas esfericas\n 2.-Convertir coordenadas esfericas a coordenadas cartesianas\nIntroduzca cualquier numero para continuar:");
    scanf("%d", &valor);
    if(valor>=1);
    {
  float r, teta, phi, num1,num2,num3;
  printf("Introduce una coordenada cartesiana en radianes para convertirla en coordenada esferica\n");
  printf("Introduce la coordenada x:");
  scanf("%f", &num1);
  printf("Introduce la coordenada y:");
    scanf("%f", &num2);
  printf("Introduce la coordenada en z:");
  scanf("%f", &num3);
  r= sqrt((num1*num1)+(num2*num2)+ (num3*num3));
  teta= acos(num3/r);
  phi=atan(num2/num1);
  printf("Tus coodenadas cartesianas en esfericas es: %f , %f , %f", r, teta, phi);
    
    if (valor>=2);
    
        float x, y, z, num4,num5,num6;
  printf("\nIntroduce una coordenada esferica para convertila en cartesiana\n");
  printf("Introduce la coordenada r:");
  scanf("%f", &num4);
  printf("Introduce la coordenada teta:");
    scanf("%f", &num5);
  printf("Introduce la coordenada en phi:");
  scanf("%f", &num6);
  x=(num4)*sin(num5)*cos(num6);
  y=(num4)*sin(num5)*sin(num6);
  z=(num4)*cos(num5);
  printf("Tus coodenadas cartesianas en esfericas es: %f , %f , %f", x, y, z);
    }
        
  return 0;
}
