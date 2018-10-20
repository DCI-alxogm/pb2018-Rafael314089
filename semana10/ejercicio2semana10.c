#include<stdio.h>
#include<stdlib.h>


void cuadrado(float h); 
float tre(float h); 


int main(int argc, char *argv[]){



int num;
float n2, n4, r4;

printf("El programa que estas ejecutando es: %s\n", argv[0]);
printf("Este es un programa que evalua algunas funciones\n");
printf("Introduce (1), si deseas f(x)=x²\n");
printf("Introduce (2), si deseas f(x)=x³\n");

scanf("%i", &num); 

if (num==1){ 
n2 = atof(argv[1]); 
cuadrado(n2); 
}


if (num==2){ 
n4 = atof(argv[1]); 
r4=tre(n4); 
printf("f(%f)=x³ es igual a: %f\n",n4, r4); 
}


return 0;
}
