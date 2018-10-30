#include<stdio.h>
int main()
{
	int i=0,c=0,a,b,n; //Se inicializa los contadores
	float left,rigth,up,down; //Se iniciliza los valores iniciales
	FILE*data;
	FILE*resultados; 

	data = fopen("datos.txt","r"); //Se leen los datos de apertura del archivo datos.txt
	fscanf(data,"%f %f %f %f %i", &left,&rigth,&up,&down,&n);//Se escanea los datos de cada lado de la placa
	fclose(data);
	printf("%f %f %f %f %i", left,rigth,up,down,n);
	float placa[n][n]; //Se inicliaza en 0 array
	for(a=0; a<n; a++){
                for(b=0; b<n; b++){
                        placa[b][a]=0;
                }
        }
//Asignación de valores iniciales
	for(a=0;a<n;a++){
		placa[0][a]=up;
		placa[n-1][a]=down;
	}
	for(b=0;b<n;b++){
		placa[b][0]=left;
		placa[b][n-1]=rigth;
	}
	while(i<10){ //Repetición igual a 10 veces para asegurar datos
	while(placa[5][5]<left-1){ //Se asegura que el sea menor el valor de equilibiro//
		     char buffer[32]; //Array para los nombres de los archivos
        while(c<21) {

		//Aquí se calcula cada instante de la propagación del calor
	for(a=1; a<n-1; a++){
		for(b=1; b<n-1; b++){
			placa[b][a]=(placa[b+1][a]+placa[b-1][a]+placa[b][a+1]+placa[b][a-1])/4;
		}
	}

                snprintf(buffer, sizeof(char)*32, "resultados%i", c);
                c++;
	//Se imprime los resultados en distintos archivos con su respectivo nombre
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

	return 0;//se cierra el programa
}
