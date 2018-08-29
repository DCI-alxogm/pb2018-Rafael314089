#include <stdio.h>
int main()
{
  char c;
  int vocalmin, vocalmay;

  printf("Introduce cualquier letra y te dire si es vocal o consonante: ");
    scanf("%c", &c);

    vocalmin= (c== 'a' || c=='e'||c=='i'||c=='o'||c=='u');
    vocalmay= (c== 'A' || c=='E'||c=='I'||c=='O'||c=='U');

    if (vocalmay|| vocalmin)
      {
	printf(" %c es una vocal\n", c);
      }
    else
      {
	printf("%c es una consonante",c);
      }
    
    return 0;


}
