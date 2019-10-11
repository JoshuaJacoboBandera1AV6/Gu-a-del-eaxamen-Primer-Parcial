#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (void){
float r,c,a;
printf("Calcule el radio y circunferencia de un circulo.\n");
printf("Introduzca el radio del circulo en cm:\n");
scanf("%f",&r);
a=3.1416*(r*r);
c=3.1416*r;
printf("El area del circulo es:%f cm^2.\n",a);
printf("La circunferencia del circulo es:%f cm.",c);	
}
