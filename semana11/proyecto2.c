#include<stdio.h>
int main()
{
	int i=0,c=0,a,b,n; //inicializa contadores//
	float izq,der,arr,abj; //iniciliza valores iniciales//
	FILE*datos;
	FILE*resultados; 

	datos = fopen("datos.txt","r"); //lectura de datos//
	fscanf(datos,"%f %f %f %f %i", &izq,&der,&arr,&abj,&n);
	fclose(datos);
	printf("%f %f %f %f %i", izq,der,arr,abj,n);
	float placa[n][n]; //inicliaza en 0 array//
	for(a=0; a<n; a++){
                for(b=0; b<n; b++){
                        placa[b][a]=0;
                }
        }
// se asignan valores iniciales//
	for(a=0;a<n;a++){
		placa[0][a]=arr;
		placa[n-1][a]=abj;
	}
	for(b=0;b<n;b++){
		placa[b][0]=izq;
		placa[b][n-1]=der;
	}
	while(i<10){ //repite 10 veces para confirmar datos//
	while(placa[5][5]<izq-1){ //asegura que sea manor al valor de equilibiro//
		     char buffer[32]; //array nombre archivos//
        while(c<21) {

		//calcula cada instante de propagacion del calor//
	for(a=1; a<n-1; a++){
		for(b=1; b<n-1; b++){
			placa[b][a]=(placa[b+1][a]+placa[b-1][a]+placa[b][a+1]+placa[b][a-1])/4;
		}
	}

                snprintf(buffer, sizeof(char)*32, "resultados%i", c);
                c++;
	//imprime resultados en archivos diferentes//
	resultados=fopen(buffer,"w");
	for(a=0; a<n; a++){
                for(b=0; b<n; b++){
			fprintf(resultados, "%f ", placa[b][a]);
		}
		fprintf(resultados, "\n");
	}
	}
	fclose(resultados);
	c=0;
	}
	i++;
	c=0;
	}

	return 0;
}
