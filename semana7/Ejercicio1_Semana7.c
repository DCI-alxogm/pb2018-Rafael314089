#include<stdio.h>
#include<math.h>

int main()
{
	FILE*fp;
	int p,n2,j,k;
	float i,n,i1,i2,fx,lx,h,sumatoria,fa;

	fp=fopen("Potencia.txt","r");
	fscanf(fp,"%i",&p);
	fscanf(fp,"%f",&n);
	fscanf(fp,"%f",&i1);
	fscanf(fp,"%i",&n2);
	fscanf(fp,"%i",&j);
	fclose(fp);

	i2=(i1-n)/n2;

	fp=fopen("resultados.txt","w");
	fprintf(fp,"x\t\tf(x)\t\t\tl(x)\n");

	if(p>=1){
	
        fa=pow(n,p);
	for(i=n;i<=i1;i+=i2)
	{
	fx=pow(i,p);
        
	h=(i-n)/j;
        sumatoria=0;
	for(k=1;k<=j-1;k++){
	sumatoria=sumatoria+(pow((n+(k*h)),p));}

	lx=h*(((fx+fa)/2.0)+sumatoria);
	fprintf(fp,"%f\t%f\t\t%f\n",i,fx,lx);
	}
	
	}
	else{
	fprintf(fp,"Potencia no valida\n");
	return 1;
	}

	fclose(fp);

	return 0;
}
