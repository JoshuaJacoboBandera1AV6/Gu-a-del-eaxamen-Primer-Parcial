#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main (void){
int	b;
float c,a;
printf("Conozca su peso adecuado.\n");
printf("Introduzca su altura en metros. Ejemplo: 1.65 m.\n");
scanf("%f",&a);
printf("Introduzca su edad:\n");
scanf("%d",&b);
c=(((a*100)-100)+(b*0.1))*0.9;
printf("Su peso recomendado es:%f Kg",c);
}
