#include <stdio.h>

int main()
{

  int opcion;

  printf("Teclear una opcion\n");
  printf("(1) Para convertir temperaturas\n");
  printf("(2) Para convetir coordenadas\n");

  scanf("%i", &opcion);

  switch( opcion)
    {
    case 1:
      printf("Entraste a la opcion 1");
      break;

    case 2:
      printf("Entraste a la opcion 2");
      break;

    default:
      printf("Opcion invalida");
      break;
    }
  return 0;
}
