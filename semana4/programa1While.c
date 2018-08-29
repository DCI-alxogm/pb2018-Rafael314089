#include <stdio.h>
int main()
{
  int opcion;
  printf("\t\t\tPROGRAMA DE CONVERSIONES\n\t\t\t\tCONVERSIONES DE GRADOS DE TIPO CARTESIANAS, POLARES, FARENHEINT Y CENTIGRADOS\n");
  printf("Bienvenido, elija una opcion:\n");
  printf("\n\t\t1.-Conversor de grados centigrados a grados farenheint y viceversa\n\t\t2.-Conversor de grados polares a cartesianos y viceversa\n ");
  printf("Elija una opcion introduciendo el numero de la opcion que desee: ");
  scanf("%d", &opcion)
  
  switch(opcion)
                                                                {
								case 1:
  float farenheint, centigrados, num1, opcion1;
  
  printf("\tPROGRAMA PARA CONVERTIR TEMPERATURA EN GRADOS CENTIGRADOS Y FARENHEINT\n");
  printf("Seleccione por favor que desea convertir introduciendo el numero de la opcion\n");
  printf("\t\t\t1.-Convertir grados centigrados a grados farenheint\n\t\t\t2.-Convertir grados farenheint a grados centigrados\n");
  scanf("%f",&opcion1);
 
  case 1:
  while(opcion1==1)
    {
      printf("\nIntroduzca la cantidad deseada a convertir: ");
      scanf("%f", &num1);
      centigrados=(num1*1.8)+32;
      printf("\tTu resultado es: %f", centigrados);
     
	while(opcion1==2)
	  {
	     printf("\nIntroduzca la cantidad deseada a convertir: ");
	     scanf("%f", &num1);
	     farenheint=(num1-32)/1.8;
	     printf("\tTu resultado es: %f",farenheint);
	  }
	printf("\n\n¿Desea hacer alguna otra conversion?");
	break;
   
    }
  break;
                                                                 case 2.

  float polares, cartesianas, opcion2, x,y,z;

  printf("\tPROGRAMA PARA CONVETIR GRADOS POLARES A CARTESIANOS Y VICEVERSA\n");
  printf("Seleccione por favor que desea convertir introduciendo el numero de la opcion\n");
  printf("\t\t\t3.-Convertir coordenadas polares a coordenadas cartesianas\n\t\t\t4.-Convertir coordenadas cartesianas a coordenadas polares\n");
  scanf("%f", &opcion2);

  while(opcion2=4)
                        {
			   float r, teta, num1,num2;
                                   printf("Introduce una coordenada cartesiana en radianes para convertirla en coordenada polar\n");
                                   printf("Introduce la coordenada x:");
				        scanf("%f", &num1);
					
                                   printf("Introduce la coordenada y:");			   
                                        scanf("%f", &num2);                               
				   
                                        
                                   r= sqrt((num1*num1)+(num2*num2)));
                                   teta= atan(num2/num1); 
         
                                   
                                   printf("Tus coodenadas cartesianas en coordenadas polares es:( %f , %f) ", r, teta);
                        }
  while(opcion2==3)
                                         {
					   
					   float x, y, r, teta;

					         printf("\nIntroduce una coordenada polar para convertila en cartesiana\n");
  
                                                 printf("Introduce la coordenada r:");
                                                    scanf("%f", &r);
  
                                                 printf("Introduce la coordenada teta:");
                                                    scanf("%f", &teta);
  
						    x=r(acos(teta));
						    y=r(asin(teta));
                                                
  printf("\nTus coodenadas polares en cartesianas es:( %f , %f) ", x, y );
    }
  break;
  
  default:
    printf("Opcion invalida");
    break;
                                                                                                   } 


	return 0;

}


    
	    
   
	
  
