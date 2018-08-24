#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Introduzca dos numeros y te dire cual es mayor o si los dos son iguales\n");
    printf("Introduzca su primer numero: ");
        scanf("%d", &num1);
    printf("introduzca su segundo numero: ");
        scanf("%d", &num2);
if(num1==num2)
{
    printf("Su primer numero es igual que el segundo: \n%d=%d", num1,num2);

}
else if(num1>=num2)
    {
        printf("Su primer numero es mayor que el segundo: \n%d>%d", num1, num2);
    }
else(num1<num2);
    {
        printf("Su primer numero es menor que el segundo: \n%d<%d",num1, num2);
    }
    return 0;
}
