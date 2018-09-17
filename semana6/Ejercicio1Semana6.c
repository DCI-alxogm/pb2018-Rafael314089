#include <stdio.h>

int main()
{

int i,h=0,m=0,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0;
	int edad[10],sexo[10],semestre[10];
	float promedio[10],p=0;

	for(i=0;i<10;i++)
	  {
	printf("Edad del alumno %i: ",i+1);
	scanf("%i", &edad[i]);
	printf("Sexo del alumno %i(Introducir 0 para hombre o 1 para mujer): ",i+1);
	scanf("%i", &sexo[i]);
	printf("Semestre del alumno %i: ",i+1);
	scanf("%i", &semestre[i]);
	printf("Promedio del alumno %i: ",i+1);
	scanf("%f", &promedio[i]);
	  }

	for(i=0;i<10;i++)
	  {

		if(sexo[i]==0)
		  {
		h++;
		  }
	         	else
		          {
		           m++;
		           }
		///////////////////////////////////////////////////////////
	          	        if(semestre[i]==1)
	               	             {
	                 	      s1++;
	                             }
			         	else     //
		                                        {
	                                                 	if(semestre[i]==2)
	                                                      	  {
	                                                         	s2++;
	                                                           }
	                                                              else
		  {
		if(semestre[i]==3)
		  {
		s3++;
		  }
		else
		  {
		if(semestre[i]==4)
		  {
		s4++;
		  }
		else
		  {
		if(semestre[i]==5)
		  {
		s5++;
		  }
		else
		  {
		if(semestre[i]==6)
		  {
		s6++;}
		else{
		if(semestre[i]==7)
		  {
		s7++;
		  }
		else
		  {
		if(semestre[i]==8)
		  {
		s8++;
		  }
		else
		  {
		s9++;
		  }
		}}}}}}}

		p=p+promedio[i];
	}
	p=p/10;
	printf("Se capturaron 10 alumnos de los cuales:\n");
	printf("\t%i son mujeres y %i son hombres\n",m,h);
	printf("\t%i son de primero\n",s1);
	printf("\t%i son de segundo\n",s2);
	printf("\t%i son de tercero\n",s3);
	printf("\t%i son de cuarto\n",s4);
	printf("\t%i son de quinto\n",s5);
	printf("\t%i son de sexto\n",s6);
	printf("\t%i son de septimo\n",s7);
	printf("\t%i son de octavo\n",s8);
	printf("\t%i son de noveno\n",s9);
	printf("\tY el promedio de las calificaciones de todos los alumnos es:");
	printf("%f\n",p);

	return 0;
}
  
