#include <stdio.h>
#include <math.h>

int main ()
{
  //Antes que todo, se declara las varias para cada parámetro que, en éste caso, seran las coordenadas en "x","y" y "z" junto con sus respectivas velocidades. También se declara t que es el tiempo total de la evolución, h que es el tamaño del incremento, ms masa solar y mp masa del planeta.
  //Aquí tambien se declara un vaiable char para que le ponga el nombre que le corresponda a cada archivo. Por último, r es la distancia producto de la raíz de la suma de los cuadrados de "x","y" y "z" y j y i son contadores.
  // "n" es la cantidad de veces que se repetirá el proceso, por lo cual tiene valor 9.
    FILE*re;
    FILE*w;
    double x,y,z,vx,vy,vz,t,h,ms,mp,r,j;
    int i,n=9;
    char name[25];

    re=fopen("datos.txt","r");//Se lee un archivo que contiene las coordenadas y los valores para las velocidades establecidas como unas coordenadas y velocidades iniciales.

   for(i=0;i<n;i++)
   {
     //Se va lleyendo el nombre de cada planeta a la par que con sus datos asignandole cada vez el valor a su respectiva variable.
       fscanf(re,"%s",name);
       fscanf(re,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &x,&y,&z,&vx,&vy,&vz,&mp,&ms,&t,&h);
                vx = vx * 365.2425;
                vy = vy * 365.2425;//Aquí se convierte cada velocidad que, originalmente se encontraba en unidades de AU/day a AU/year.
                vz = vz * 365.2425;
		w=fopen(name,"w");//Aquí se escriben los nuevos datos en un archivo nuevo ahora generado.

        fprintf(w, "Posicion                     Velocidad\n");
        fprintf(w, "%f, %f, %f, %f, %f, %f\n",x, y, z, vx, vy, vz);



        for (j=0;j<t;j = j + h)
          	{
            r = sqrt(pow(x,2)+pow(y,2)+pow(z,2));
            x = x + vx * h;
            y = y + vy * h;
            z = z + vz * h;
	    //Aquí a través del método de Euler se determina los valores de de las coordenadas.

	vx = vx - h * ((4*3.14159265358*3.14159265358*x)/(pow(r, 3)));
	vy = vy - h * ((4*3.14159265358*3.14159265358*y)/(pow(r, 3)));
	vz = vz - h * ((4*3.14159265358*3.14159265358*z)/(pow(r, 3)));


	fprintf(w, "%f, %f, %f, %f, %f, %f\n", x, y, z, vx, vy, vz);//Se imprimen los resultados y se reinicia el ciclo.

   		}
	fclose(w);//Se cierra la variable de escritura
   }
   fclose(re);//se cierra la variable de lectura.

    return 0;
}
