#include<stdio.h> 
#include<math.h> 


int main()
{
  int i,j,p1,p2,primo,res,option=1,count; 
		while(option==1){ 

		count=0; 
			printf("Introducir el numero con el que desee iniciar y terminar el rango \n"); 
        
			scanf("%i %i",&p2,&p1);


				while((p2-p1)>100){ 
				
		        
				printf("Favor de colocar un intervalo menor a 100"); 
					
				printf("Escribe el intervalo de dos numeros dentro del cual deseas saber los numeros primos que existen \n");
				scanf("%i %i",&p1,p2);
					
				}

					for(i=p1; i<=p2; i++){ 
			        
					res=sqrt(i); 
			        
					primo=1; 

					for(j=2; j<=res; j++){ 
						if((i%j)==0){ 
					
				        
						primo=0;
						}
						}

						
							if(primo==1){ 
					        
							printf(" %i",i);
					        
							count=count+1; 
	        
								if(count%20==0 ){
								printf("\n"); 
									}

										}	
									}
			
		        
				printf("\n Introduce 1 si quieres volver a realizar el programa, 2 si quieres salir: \n"); 
		        
				scanf("%i", &op);
				}

	return 0;
}
 
