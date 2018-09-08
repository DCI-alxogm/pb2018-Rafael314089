#include<stdio.h>
#include<math.h>

int main()
{	
	float temp_C,temp_K;
	float Temp_C,final,delta;
	int n,i;
	int op=1;

	while(op==1){

		printf("Ingrese el valor de la temperatura inicial\n");
		scanf("%f",&Temp_C);
		printf("Ingrese el valor de la temperatura final\n");
		scanf("%f",&final);
		printf("Ingrese el valor de n\n");
		scanf("%i",&n);
	
	delta=(final-Temp_C)/n;
	for(i=0;i<n;i++){
		
		temp_K=temp_C+273.15;
		temp_C=temp_C+delta;	//	temp_C+=delta;
		printf("%f %f\n",temp_C,temp_K);

	}
	printf("Presiona 1 para ejecutar de nuevo el programa, presiona 2 para salir\n");
	scanf("%i",&op);
	}
	return 0;
}
